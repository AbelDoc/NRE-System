
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
    using namespace NRE::Math;

     namespace NRE {
         namespace Event {

             bool InputManager::isKeyPressed(KeyCode code) const {
                 return std::find(keys.begin(), keys.end(), code) != keys.end();
             }

             bool InputManager::isButtonPressed(ButtonCode code) const {
                 return std::find(buttons.begin(), buttons.end(), ButtonEventData(code, Point2D<unsigned int>())) != buttons.end();
             }

             void InputManager::processPressedKey(KeyCode key) {
                 keys.emplace_back(key);
             }

             void InputManager::processPressedButton(ButtonEventData const& buttonData) {
                 buttons.emplace_back(buttonData);
             }

             void InputManager::processReleasedKey(KeyCode key) {
                 auto it = std::remove(keys.begin(), keys.end(), key);
                 if (it != keys.end()) {
                     keys.erase(it);
                 }
             }

             void InputManager::processReleasedButton(ButtonEventData const& buttonData) {
                 auto it = std::remove(buttons.begin(), buttons.end(), buttonData);
                 if (it != buttons.end()) {
                     buttons.erase(it);
                 }
             }

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

             void InputManager::updateButtonEventData(ButtonEventData const& buttonData) {
                 std::replace(buttons.begin(), buttons.end(), buttonData, buttonData);
             }

         }
     }
