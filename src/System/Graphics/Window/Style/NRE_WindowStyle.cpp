
    /**
     * @file NRE_WindowStyle.cpp
     * @brief Implementation of System's API's Object : WindowStyle
     * @author Louis ABEL
     * @date 09/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_WindowStyle.hpp"

     namespace NRE {
         namespace System {

             WindowStyle::WindowStyle(unsigned int s) : style(s) {
             }

             unsigned int WindowStyle::getStyle() const {
                 return style;
             }

             WindowStyle& WindowStyle::operator|=(WindowStyle const& ws) {
                 style = style | ws.style;
                 return *this;
             }

             WindowStyle WindowStyle::operator|(WindowStyle const& ws) {
                 return WindowStyle(*this) |= ws;
             }

        }
    }
