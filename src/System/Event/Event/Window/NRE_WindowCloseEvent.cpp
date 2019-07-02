
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

     namespace NRE {
         namespace Event {

             WindowCloseEvent::WindowCloseEvent(WindowId id) : window(getGraphicsSystem().getWindow(id)) {
             }

         }
     }
