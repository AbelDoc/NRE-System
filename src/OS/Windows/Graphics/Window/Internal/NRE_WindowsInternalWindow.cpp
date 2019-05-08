
    /**
     * @file NRE_WindowsInternalWindow.cpp
     * @brief Implementation of System's API's Object : InternalWindow
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_WindowsInternalWindow.hpp"

    using namespace NRE::Math;

     namespace NRE {
         namespace System {

            InternalWindow::InternalWindow(std::string const& title, Point2D<unsigned int> const& position, Vector2D<unsigned int> const& size) {
                internal = CreateWindowExA(WS_EX_APPWINDOW, "STATIC", title.c_str(), WS_VISIBLE | WS_BORDER | WS_SYSMENU | WS_MINIMIZEBOX | WS_MAXIMIZEBOX, position.getX(), position.getY(), size.getW(), size.getH(), NULL, NULL, NULL, NULL);
            }

            InternalWindow::InternalWindow(std::string const& title, Vector2D<unsigned int> const& size) : InternalWindow(title, computeCenteredPosition(size), size) {
            }

            InternalWindow::~InternalWindow() {
                DestroyWindow(internal);
            }

            Point2D<unsigned int> InternalWindow::getPosition() const {
                RECT internalRect;
                GetWindowRect(internal, &internalRect);
                return Point2D<unsigned int>(internalRect.left, internalRect.top);
            }

            Point2D<unsigned int> InternalWindow::computeCenteredPosition(Vector2D<unsigned int> size) {
                RECT desktop;
                GetWindowRect(GetDesktopWindow(), &desktop);

                return Point2D<unsigned int>(desktop.right / 2 - size.getW() / 2, desktop.bottom / 2 - size.getH() / 2);
            }

        }
    }
