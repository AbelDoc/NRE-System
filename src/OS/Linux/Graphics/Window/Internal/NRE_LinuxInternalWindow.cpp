
    /**
     * @file NRE_LinuxInternalWindow.cpp
     * @brief Implementation of Graphics's API's Object : InternalWindow
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

     #include "../../../../../System/Graphics/Window/Internal/NRE_InternalWindow.hpp"
     #include  <X11/Xatom.h>

     using namespace NRE::Math;

     namespace NRE {
         namespace Graphics {

            InternalWindow::InternalWindow(WindowId i, std::string const& title, Point2D<unsigned int> const& position, Vector2D<unsigned int> const& size, WindowStyle const& style) : id(i) {
                Display* display = GraphicsDriver::getDriver().getDisplay();
                xId = XDefaultScreen(display);

                bool inFullscreen = style & WindowStyle::FULLSCREEN;

                Window root = XRootWindow(display, xId);
                XWindowAttributes attributes;
                XGetWindowAttributes(display, root, &attributes);

                Point2D<unsigned int> finalPosition(position);
                Vector2D<unsigned int> finalSize(size);
                if (inFullscreen) {
                    finalPosition.setCoord(0, 0);
                    finalSize.setSize(attributes.width, attributes.height);
                }

                internal = XCreateSimpleWindow(display, XRootWindow(display, xId), finalPosition.getX(), finalPosition.getY(), finalSize.getW(), finalSize.getH(), 1, XBlackPixel(display, xId), XWhitePixel(display, xId));
                finishCreation(style, title);
            }

            InternalWindow::InternalWindow(WindowId i, std::string const& title, Vector2D<unsigned int> const& size, WindowStyle const& style) : id(i) {
                Display* display = GraphicsDriver::getDriver().getDisplay();
                xId = XDefaultScreen(display);

                bool inFullscreen = style & WindowStyle::FULLSCREEN;

                Window root = XRootWindow(display, xId);
                XWindowAttributes attributes;
                XGetWindowAttributes(display, root, &attributes);

                Point2D<unsigned int> finalPosition;
                Vector2D<unsigned int> finalSize(size);
                if (inFullscreen) {
                    finalPosition.setCoord(0, 0);
                    finalSize.setSize(attributes.width, attributes.height);
                } else {
                    finalPosition.setCoord(attributes.width / 2 - size.getW() / 2, attributes.height / 2 - size.getH());
                }

                internal = XCreateSimpleWindow(display, root, finalPosition.getX(), finalPosition.getY(), finalSize.getW(), finalSize.getH(), 1, XBlackPixel(display, xId), XWhitePixel(display, xId));
                finishCreation(style, title);
            }

            void InternalWindow::close() {
                GraphicsDriver::getDriver().unregisterWindow(internal);
                XDestroyWindow(GraphicsDriver::getDriver().getDisplay(), internal);
            }

            void InternalWindow::updateStyle(WindowStyle const& style) {
                bool inFullscreen = style & WindowStyle::FULLSCREEN;
                Display* display = GraphicsDriver::getDriver().getDisplay();

                Atom wHints = XInternAtom(display, "_MOTIF_WM_HINTS", false);
                WindowStyle::NativeWindowHints hints;
                if (inFullscreen) {
                    hints.flags = WindowStyle::HINTS_DECORATIONS;
                    hints.decorations = 0;
                } else {
                    hints = style.toNativeStyle();
                }
                XChangeProperty(display, internal, wHints, wHints, 32, PropModeReplace, reinterpret_cast <const unsigned char*> (&hints), 5);
                toggleFullscreen(inFullscreen);
            }

            void InternalWindow::toggleFullscreen(bool inFullscreen) {
                if (inFullscreen) {
                    Display* display = GraphicsDriver::getDriver().getDisplay();

                    XGrabPointer(display, internal, true , 0, GrabModeAsync, GrabModeAsync, internal, 0L, CurrentTime);
                    XGrabKeyboard(display, internal, false, GrabModeAsync, GrabModeAsync, CurrentTime);
                }
            }

            void InternalWindow::finishCreation(WindowStyle const& style, std::string const& title) {
                GraphicsDriver::getDriver().registerWindow(internal, id);

                Display* display = GraphicsDriver::getDriver().getDisplay();
                XStoreName(display, internal, title.c_str());

                updateStyle(style);
                XSetWMProtocols(display, internal, &(GraphicsDriver::getDriver().getCloseAtom()), 1);

                XMapWindow(display, internal);
                XFlush(display);
            }

            Point2D<unsigned int> InternalWindow::getPosition() const {
                XWindowAttributes attributes;
                XGetWindowAttributes(GraphicsDriver::getDriver().getDisplay(), internal, &attributes);

                return Point2D<unsigned int>(attributes.x, attributes.y);
            }
        }
    }
