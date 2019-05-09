
    /**
     * @file NRE_WindowStatus.cpp
     * @brief Implementation of System's API's Object : WindowStatus
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_WindowStatus.hpp"

     namespace NRE {
         namespace System {

             WindowStatus::WindowStatus() : closed(false) {
             }

             bool WindowStatus::isClosed() const {
                 return closed;
             }

             void WindowStatus::setClosed(bool status) {
                 closed = status;
             }

        }
    }
