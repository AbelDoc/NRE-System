
    /**
     * @file NRE_WindowAttributes.cpp
     * @brief Implementation of Graphics's API's Object : WindowAttributes
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_WindowAttributes.hpp"

    using namespace NRE::Math;
    using namespace NRE::Utility;

     namespace NRE {
         namespace Graphics {

             Utility::String WindowAttributes::toString() const {
                Utility::String res;
                res.reserve(30);
                res << title;
                res << " | ";
                res << position;
                res << " - ";
                res << size.getW();
                res << "x";
                res << size.getH();
                return res;
             }

             std::ostream& operator <<(std::ostream& stream, WindowAttributes const& o) {
                return stream << o.toString();
             }

        }
    }
