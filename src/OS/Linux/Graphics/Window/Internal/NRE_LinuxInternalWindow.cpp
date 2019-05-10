
    /**
     * @file NRE_LinuxInternalWindow.cpp
     * @brief Implementation of System's API's Object : InternalWindow
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

     #include "../../../../../System/Graphics/Window/Internal/NRE_InternalWindow.hpp"

     using namespace NRE::Math;

     namespace NRE {
         namespace System {

            InternalWindow::InternalWindow(WindowId i, std::string const& title, Point2D<unsigned int> const& position, Vector2D<unsigned int> const& size, WindowStyle const& style) : id(i) {
                Display* display = GraphicsDriver::getDriver().getDisplay();
                xId = XDefaultScreen(display);
                internal = XCreateSimpleWindow(display, XRootWindow(display, xId), position.getX(), position.getY(), size.getW(), size.getH(), 1, XBlackPixel(display, xId), XWhitePixel(display, xId));
                finishCreation(style, title);
            }

            InternalWindow::InternalWindow(WindowId i, std::string const& title, Vector2D<unsigned int> const& size, WindowStyle const& style) : id(i) {
                Display* display = GraphicsDriver::getDriver().getDisplay();
                xId = XDefaultScreen(display);
                Window root = XRootWindow(display, xId);

                XWindowAttributes attributes;
                XGetWindowAttributes(display, root, &attributes);

                internal = XCreateSimpleWindow(display, root, attributes.width / 2 - size.getW() / 2, attributes.height / 2 - size.getH(), size.getW(), size.getH(), 1, XBlackPixel(display, xId), XWhitePixel(display, xId));
                finishCreation(style, title);
            }

            void InternalWindow::close() {
                GraphicsDriver::getDriver().unregisterWindow(internal);
                XDestroyWindow(GraphicsDriver::getDriver().getDisplay(), internal);
            }

            void InternalWindow::updateStyle(WindowStyle const& style) {
                Display* display = GraphicsDriver::getDriver().getDisplay();
                Atom wHints = XInternAtom(display, "_MOTIF_WM_HINTS", false);
                WindowStyle::NativeWindowHints hints = style.toNativeStyle();
                XChangeProperty(display, internal, wHints, wHints, 32, PropModeReplace, reinterpret_cast <const unsigned char*> (&hints), 5);
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
