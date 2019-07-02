
    /**
     * @file NRE_WindowCloseEvent.tpp
     * @brief Implementation of Event's API's Object : WindowCloseEvent
     * @author Louis ABEL
     * @date 14/05/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Event {

            inline Graphics::Window& WindowCloseEvent::getWindow() {
                return window;
            }

        }
    }
