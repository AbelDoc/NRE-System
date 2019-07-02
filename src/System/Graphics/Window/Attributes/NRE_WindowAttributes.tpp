
    /**
     * @file NRE_WindowAttributes.tpp
     * @brief Implementation of Graphics's API's Object : WindowAttributes
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Graphics {

            inline WindowAttributes::WindowAttributes(Utility::String const& t, Math::Point2D<unsigned int> const& pos, Math::Vector2D<unsigned int> const& s) : title(t), position(pos), size(s) {
            }

            inline WindowAttributes::WindowAttributes(Utility::String const& t, Math::Vector2D<unsigned int> const& s) : title(t), size(s) {
            }

            inline void WindowAttributes::setPosition(Math::Point2D<unsigned int> const& pos) {
                position = pos;
            }

        }
    }
