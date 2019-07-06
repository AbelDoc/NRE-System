
    /**
     * @file NRE_LinuxInternalWindow.tpp
     * @brief Implementation of Graphics's API's Object : InternalWindow
     * @author Louis ABEL
     * @date 06/07/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Graphics {

            inline void InternalWindow::close() {
                GraphicsDriver::getDriver().unregisterWindow(internal);
                XDestroyWindow(GraphicsDriver::getDriver().getDisplay(), internal);
            }

            inline Math::Point2D<unsigned int> InternalWindow::getPosition() const {
                XWindowAttributes attributes;
                XGetWindowAttributes(GraphicsDriver::getDriver().getDisplay(), internal, &attributes);

                return Math::Point2D<unsigned int>(attributes.x, attributes.y);
            }

        }
    }
