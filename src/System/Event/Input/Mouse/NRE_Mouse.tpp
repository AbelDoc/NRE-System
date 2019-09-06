
    /**
     * @file NRE_Mouse.tpp
     * @brief Implementation of Event's API's Object : Mouse
     * @author Louis ABEL
     * @date 06/09/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Event {

            inline Math::Point2D<unsigned int> const& Mouse::getPosition() const {
                return position;
            }

            inline Math::Vector2D<int> const& Mouse::getDelta() const {
                return delta;
            }

            inline bool Mouse::isRelativeMode() const {
                return relativeMode;
            }

            inline void Mouse::setLastPosition(Math::Point2D<unsigned int> const& pos) {
                lastPosition = pos;
            }

            inline void Mouse::updateFromPosition(Math::Point2D<unsigned int> const& pos) {
                lastPosition = position;
                position = pos;
                delta.setCoord(static_cast <int> (lastPosition.getX()) - static_cast <int> (position.getX()),
                               static_cast <int> (lastPosition.getY()) - static_cast <int> (position.getY()));
            }

            inline void Mouse::updateFromDelta(Math::Vector2D<int> const& motion) {
                lastPosition = position;
                position.setCoord(static_cast <unsigned int> (static_cast <int> (position.getX()) + motion.getX()),
                                  static_cast <unsigned int> (static_cast <int> (position.getY()) + motion.getY()));
                delta = motion;
            }

        }
    }
