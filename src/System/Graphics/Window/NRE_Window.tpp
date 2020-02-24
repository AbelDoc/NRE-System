
    /**
     * @file NRE_Window.tpp
     * @brief Implementation of Graphics's API's Object : Window
     * @author Louis ABEL
     * @date 02/07/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Graphics {

            inline bool Window::isRunning() const {
                return !status.isClosed();
            }
            
            inline InternalWindow const& Window::getInternal() const {
                return window;
            }
            
            inline WindowAttributes const& Window::getAttributes() const {
                return attributes;
            }

            inline Id Window::getId() const {
                return id;
            }
            
            inline Math::Point2D<unsigned int> Window::toScreen(Math::Point2D<unsigned int> const& p) const {
                return window.toScreen(p);
            }

            inline void Window::refresh() {
                window.refresh();
            }
        }
    }
