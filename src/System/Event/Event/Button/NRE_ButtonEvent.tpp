
    /**
     * @file NRE_ButtonEvent.tpp
     * @brief Implementation of Event's API's Object : ButtonEvent
     * @author Louis ABEL
     * @date 02/07/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Event {

            inline ButtonEvent::ButtonEvent(ButtonCode c, Math::Point2D<unsigned int> const& pos) : code(c), position(pos) {
            }

            inline ButtonCode ButtonEvent::getCode() const {
                return code;
            }

            inline Math::Point2D<unsigned int> const& ButtonEvent::getPosition() const {
                return position;
            }

            inline bool ButtonEvent::isCode(ButtonCode c) const {
                return code == c;
            }

            inline bool ButtonEvent::operator ==(ButtonEvent const& e) const {
                return code == e.code;
            }

        }
    }
