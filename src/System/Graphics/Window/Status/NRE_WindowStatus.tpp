
    /**
     * @file NRE_WindowStatus.tpp
     * @brief Implementation of Graphics's API's Object : WindowStatus
     * @author Louis ABEL
     * @date 02/07/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Graphics {

            inline WindowStatus::WindowStatus() : closed(false), inFullscreen(false) {
            }

            inline bool WindowStatus::isClosed() const {
                return closed;
            }

            inline bool WindowStatus::isInFullscreen() const {
                return inFullscreen;
            }

            inline void WindowStatus::setClosed(bool status) {
                closed = status;
            }
            
            inline void WindowStatus::setFullscreen(bool status) {
                inFullscreen = status;
            }

        }
    }
