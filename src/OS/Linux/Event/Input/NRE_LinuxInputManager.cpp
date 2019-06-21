
    /**
     * @file NRE_LinuxInputManager.hpp
     * @brief Implementation of Event's API's Object : InputManager
     * @author Louis ABEL
     * @date 12/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "../../../../System/Event/Input/NRE_InputManager.hpp"

     namespace NRE {
         namespace Event {

                KeyCode InputManager::translateKey(XKeyEvent const& keyEvent) const {
                    return keyTranslater.translateKey(keyEvent);
                }

                ButtonCode InputManager::translateButton(XButtonEvent const& buttonEvent) const {
                    ButtonCode code = ButtonCode::NO_BUTTON;
                    switch (buttonEvent.button) {
                        case Button1 : {
                            return ButtonCode::LEFT_BUTTON;
                            break;
                        }
                        case Button2 : {
                            return ButtonCode::MIDDLE_BUTTON;
                            break;
                        }
                        case Button3 : {
                            return ButtonCode::RIGHT_BUTTON;
                            break;
                        }
                        case 8 : {
                            return ButtonCode::X1_BUTTON;
                            break;
                        }
                        case 9 : {
                            return ButtonCode::X2_BUTTON;
                            break;
                        }
                    }
                    return code;
                }

         }
     }
