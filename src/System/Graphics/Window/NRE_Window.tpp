
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

            inline WindowId Window::getId() const {
                return id;
            }
        }
    }
