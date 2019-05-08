
    /**
     * @file NRE_Window.cpp
     * @brief Implementation of System's API's Object : Window
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_Window.hpp"

    using namespace NRE::Math;

     namespace NRE {
         namespace System {

             Window::Window(std::string const& t, Math::Point2D<unsigned int> const& pos, Math::Vector2D<unsigned int> const& s) : window(t, pos, s), title(t), position(pos), size(s) {
             }

             Window::Window(std::string const& t, Math::Vector2D<unsigned int> const& s) : window(t, s), title(t), size(s) {
                 position = window.getPosition();
             }

             std::string Window::toString() const {
                std::string res(title);
                res += " | ";
                res += position.toString();
                res += " - ";
                res += std::to_string(size.getW());
                res += "x";
                res += std::to_string(size.getH());
                return res;
             }

             std::ostream& operator <<(std::ostream& stream, Window const& o) {
                return stream << o.toString();
             }

        }
    }
