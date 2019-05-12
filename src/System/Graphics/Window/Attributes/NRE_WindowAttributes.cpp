
    /**
     * @file NRE_WindowAttributes.cpp
     * @brief Implementation of Graphics's API's Object : WindowAttributes
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_WindowAttributes.hpp"

    using namespace NRE::Math;

     namespace NRE {
         namespace Graphics {

             std::string WindowAttributes::toString() const {
                std::string res(title);
                res += " | ";
                res += position.toString();
                res += " - ";
                res += std::to_string(size.getW());
                res += "x";
                res += std::to_string(size.getH());
                return res;
             }

             std::ostream& operator <<(std::ostream& stream, WindowAttributes const& o) {
                return stream << o.toString();
             }

        }
    }
