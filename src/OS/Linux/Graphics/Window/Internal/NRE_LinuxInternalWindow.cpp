
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
     using namespace NRE::Utility;

     namespace NRE {
         namespace Graphics {

            InternalWindow::InternalWindow(WindowId i, String const& title, Point2D<unsigned int> const& position, Vector2D<unsigned int> const& size, WindowStyle const& style) : id(i) {
                Display* display = GraphicsDriver::getDriver().getDisplay();
                xId = XDefaultScreen(display);

                bool inFullscreen = style & WindowStyle::FULLSCREEN;

                Window root = XRootWindow(display, xId);
                XWindowAttributes monitorAttributes;
                XGetWindowAttributes(display, root, &monitorAttributes);

                XSetWindowAttributes attributes;
                attributes.event_mask = ButtonPressMask | ButtonReleaseMask | ButtonMotionMask | KeyPressMask | KeyReleaseMask | PointerMotionMask;
                attributes.background_pixel = XWhitePixel(display, xId);
                attributes.border_pixel = XBlackPixel(display, xId);

                Point2D<unsigned int> finalPosition(position);
                Vector2D<unsigned int> finalSize(size);
                if (inFullscreen) {
                    finalPosition.setCoord(0, 0);
                    finalSize.setSize(monitorAttributes.width, monitorAttributes.height);
                }
                internal = XCreateWindow(display, root, finalPosition.getX(), finalPosition.getY(), finalSize.getW(), finalSize.getH(), 1, XDefaultDepth(display, xId), InputOutput, XDefaultVisual(display, xId), CWEventMask | CWBackPixel | CWBorderPixel, &attributes);
                finishCreation(style, title);
            }

            InternalWindow::InternalWindow(WindowId i, String const& title, Vector2D<unsigned int> const& size, WindowStyle const& style) : id(i) {
                Display* display = GraphicsDriver::getDriver().getDisplay();
                xId = XDefaultScreen(display);

                bool inFullscreen = style & WindowStyle::FULLSCREEN;

                Window root = XRootWindow(display, xId);
                XWindowAttributes monitorAttributes;
                XGetWindowAttributes(display, root, &monitorAttributes);

                XSetWindowAttributes attributes;
                attributes.event_mask = ButtonPressMask | ButtonReleaseMask | ButtonMotionMask | KeyPressMask | KeyReleaseMask | PointerMotionMask;
                attributes.background_pixel = XWhitePixel(display, xId);
                attributes.border_pixel = XBlackPixel(display, xId);

                Point2D<unsigned int> finalPosition;
                Vector2D<unsigned int> finalSize(size);
                if (inFullscreen) {
                    finalPosition.setCoord(0, 0);
                    finalSize.setSize(monitorAttributes.width, monitorAttributes.height);
                } else {
                    finalPosition.setCoord(monitorAttributes.width / 2 - size.getW() / 2, monitorAttributes.height / 2 - size.getH());
                }

                internal = XCreateWindow(display, root, finalPosition.getX(), finalPosition.getY(), finalSize.getW(), finalSize.getH(), 1, XDefaultDepth(display, xId), InputOutput, XDefaultVisual(display, xId), CWEventMask | CWBackPixel | CWBorderPixel, &attributes);
                finishCreation(style, title);
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

            void InternalWindow::finishCreation(WindowStyle const& style, String const& title) {
                GraphicsDriver::getDriver().registerWindow(internal, id);

                Display* display = GraphicsDriver::getDriver().getDisplay();
                XStoreName(display, internal, title.getCData());

                updateStyle(style);
                XSetWMProtocols(display, internal, &(GraphicsDriver::getDriver().getCloseAtom()), 1);

                XMapWindow(display, internal);
                XFlush(display);
            }
        }
    }
