
    /**
     * @file NRE_WindowStyle.cpp
     * @brief Implementation of Graphics's API's Object : WindowStyle
     * @author Louis ABEL
     * @date 09/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_WindowStyle.hpp"

     namespace NRE {
         namespace Graphics {

             WindowStyle& WindowStyle::operator|=(WindowStyle const& ws) {
                 style = style | ws.style;
                 return *this;
             }

             WindowStyle WindowStyle::operator|(WindowStyle const& ws) const {
                 return WindowStyle(*this) |= ws;
             }

             unsigned int WindowStyle::operator &(unsigned int ws) const {
                 return style & ws;
             }

        }
    }
