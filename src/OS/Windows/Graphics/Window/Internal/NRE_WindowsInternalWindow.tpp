
    /**
     * @file NRE_WindowsInternalWindow.tpp
     * @brief Implementation of Graphics's API's Object : InternalWindow
     * @author Louis ABEL
     * @date 06/07/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Graphics {

            inline InternalWindow::InternalWindow(Id i, Core::String const& title, Math::Vector2D<unsigned int> const& size, WindowStyle const& style) : InternalWindow(i, title, computeCenteredPosition(size), size, style) {
            }

            inline void InternalWindow::close() {
                Core::Singleton<GraphicsDriver>::get().unregisterWindow(internal);
                DestroyWindow(internal);
            }

            inline Math::Point2D<unsigned int> InternalWindow::getPosition() const {
                RECT internalRect;
                GetWindowRect(internal, &internalRect);
                return Math::Point2D<unsigned int>(internalRect.left, internalRect.top);
            }

            inline HDC& InternalWindow::getDevice() {
                return device;
            }
            
            inline Math::Point2D<unsigned int> InternalWindow::toScreen(Math::Point2D<unsigned int> const& p) const {
                POINT pt;
                pt.x = p.getX();
                pt.y = p.getY();
                ClientToScreen(internal, &pt);
                return Math::Point2D<unsigned int>(pt.x, pt.y);
            }

            inline void InternalWindow::refresh() {
                SwapBuffers(device);
            }

        }
    }
