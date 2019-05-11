
    /**
     * @file NRE_WindowStatus.cpp
     * @brief Implementation of Graphics's API's Object : WindowStatus
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_WindowStatus.hpp"

     namespace NRE {
         namespace Graphics {

             WindowStatus::WindowStatus() : closed(false), inFullscreen(false) {
             }

             bool WindowStatus::isClosed() const {
                 return closed;
             }

             bool WindowStatus::isInFullscreen() const {
                 return inFullscreen;
             }

             void WindowStatus::setClosed(bool status) {
                 closed = status;
             }

             void WindowStatus::setFullscreen(bool status) {
                 inFullscreen = status;
             }

        }
    }
