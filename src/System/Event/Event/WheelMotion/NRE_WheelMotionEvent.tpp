
    /**
     * @file NRE_WheelMotionEvent.tpp
     * @brief Implementation of Event's API's Object : WheelMotionEvent
     * @author Louis ABEL
     * @date 02/07/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Event {

            inline WheelMotionEvent::WheelMotionEvent(Math::Point2D<unsigned int> const& pos, int d) : position(pos), delta(d) {
            }

            inline Math::Point2D<unsigned int> const& WheelMotionEvent::getPosition() const {
                return position;
            }

            inline int WheelMotionEvent::getDelta() const {
                return delta;
            }

        }
    }
