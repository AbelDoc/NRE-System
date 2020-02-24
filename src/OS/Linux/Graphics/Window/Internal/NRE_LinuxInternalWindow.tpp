
    /**
     * @file NRE_LinuxInternalWindow.tpp
     * @brief Implementation of Graphics's API's Object : InternalWindow
     * @author Louis ABEL
     * @date 06/07/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Graphics {

            inline int InternalWindow::getXId() const {
                return xId;
            }

            inline void InternalWindow::close() {
                Utility::Singleton<GraphicsDriver>::get().unregisterWindow(internal);
                XDestroyWindow(Utility::Singleton<GraphicsDriver>::get().getDisplay(), internal);
            }

            inline Math::Point2D<unsigned int> InternalWindow::getPosition() const {
                XWindowAttributes attributes;
                XGetWindowAttributes(Utility::Singleton<GraphicsDriver>::get().getDisplay(), internal, &attributes);

                return Math::Point2D<unsigned int>(attributes.x, attributes.y);
            }
    
            inline Math::Point2D<unsigned int> InternalWindow::toScreen(Math::Point2D<unsigned int> const& p) const {
                return p;
            }

            inline void InternalWindow::refresh() {
                Display* display = Utility::Singleton<GraphicsDriver>::get().getDisplay();
                glXSwapBuffers(display, internal);
            }

        }
    }
