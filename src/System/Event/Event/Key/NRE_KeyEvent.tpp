
    /**
     * @file NRE_KeyEvent.tpp
     * @brief Implementation of Event's API's Object : KeyEvent
     * @author Louis ABEL
     * @date 02/07/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Event {

            inline KeyEvent::KeyEvent(KeyCode c) : code(c) {
            }

            inline KeyCode KeyEvent::getCode() const {
                return code;
            }

            inline bool KeyEvent::isCode(KeyCode c) const {
                return code == c;
            }

        }
    }
