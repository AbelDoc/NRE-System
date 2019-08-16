
    /**
     * @file NRE_WindowCloseEvent.cpp
     * @brief Implementation of Event's API's Object : WindowCloseEvent
     * @author Louis ABEL
     * @date 14/05/2019
     * @copyright CC-BY-NC-SA
     */

     #include "NRE_WindowCloseEvent.hpp"
     #include "../../../NRE_System.hpp"

     using namespace NRE::System;
     using namespace NRE::Graphics;
     using namespace NRE::Utility;

     namespace NRE {
         namespace Event {

             WindowCloseEvent::WindowCloseEvent(Id id) : window(Singleton<System::System>::get().getGraphicsSystem().getWindow(id)) {
             }

         }
     }
