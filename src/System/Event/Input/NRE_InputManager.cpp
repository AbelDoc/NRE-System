
    /**
     * @file NRE_InputManager.tpp
     * @brief Implementation of Event's API's Object : InputManager
     * @author Louis ABEL
     * @date 14/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include <Header/NRE_Math.hpp>

    #include "NRE_InputManager.hpp"
    #include "../../NRE_System.hpp"

    using namespace NRE::System;

     namespace NRE {
         namespace Event {

             bool InputManager::isPressed(KeyCode code) const {
                 return std::find(keys.begin(), keys.end(), Key(code)) != keys.end();
             }

             void InputManager::processPressedKey(KeyCode key) {
                 keys.emplace_back(key);
             }

             void InputManager::processReleasedKey(KeyCode key) {
                 auto it = std::remove(keys.begin(), keys.end(), Key(key));
                 if (it != keys.end()) {
                     keys.erase(it);
                 }
             }

             void InputManager::update() {
                keys.erase(std::remove_if(keys.begin(), keys.end(),
                            [=] (Key const& k) {
                                return getEventSystem().emit<KeyEvent>(k.getCode());
                            }
                        ), keys.end());
             }

         }
     }
