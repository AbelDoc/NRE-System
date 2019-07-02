
    /**
     * @file NRE_InputManager.cpp
     * @brief Implementation of Event's API's Object : InputManager
     * @author Louis ABEL
     * @date 14/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_InputManager.hpp"
    #include "../../NRE_System.hpp"

    using namespace NRE::System;
    using namespace NRE::Math;

     namespace NRE {
         namespace Event {

             void InputManager::update() {
                keys.erase(std::remove_if(keys.begin(), keys.end(),
                            [=] (KeyCode k) {
                                return getEventSystem().emit<KeyEvent>(k);
                            }
                        ), keys.end());
               buttons.erase(std::remove_if(buttons.begin(), buttons.end(),
                           [=] (ButtonEventData const& b) {
                               return getEventSystem().emit<ButtonEvent>(b);
                           }
                       ), buttons.end());
             }

         }
     }
