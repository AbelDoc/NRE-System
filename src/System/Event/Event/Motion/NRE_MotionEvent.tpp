
    /**
     * @file NRE_MotionEvent.tpp
     * @brief Implementation of Event's API's Object : MotionEvent
     * @author Louis ABEL
     * @date 02/07/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Event {

            inline MotionEvent::MotionEvent(ButtonCode c, Math::Point2D<unsigned int> const& pos, Math::Vector2D<int> const& m) : code(c), position(pos), motion(m) {
            }

            inline ButtonCode MotionEvent::getCode() const {
                return code;
            }

            inline Math::Point2D<unsigned int> const& MotionEvent::getPosition() const {
                return position;
            }

            inline Math::Vector2D<int> const& MotionEvent::getMotion() const {
                return motion;
            }

            inline bool MotionEvent::isCode(ButtonCode c) const {
                return code == c;
            }

        }
    }
