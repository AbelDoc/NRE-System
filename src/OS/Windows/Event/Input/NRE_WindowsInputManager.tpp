
    /**
     * @file NRE_WindowsInputManager.tpp
     * @brief Implementation of Event's API's Object : InputManager
     * @author Louis ABEL
     * @date 12/05/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Event {

                inline KeyCode InputManager::translateKey(WPARAM wParam, LPARAM lParam) const {
                    return keyTranslater.translateKey(wParam, lParam);
                }

                inline ButtonCode InputManager::translateButton(WPARAM wParam) const {
                    ButtonCode code = ButtonCode::NO_BUTTON;
                    switch (wParam) {
                        case (MK_LBUTTON) : {
                            code = ButtonCode::LEFT_BUTTON;
                            break;
                        }
                        case (MK_MBUTTON) : {
                            code = ButtonCode::MIDDLE_BUTTON;
                            break;
                        }
                        case (MK_RBUTTON) : {
                            code = ButtonCode::RIGHT_BUTTON;
                            break;
                        }
                        case (MK_XBUTTON1) : {
                            code = ButtonCode::X1_BUTTON;
                            break;
                        }
                        case (MK_XBUTTON2) : {
                            code = ButtonCode::X2_BUTTON;
                            break;
                        }
                    }
                    return code;
                }

         }
     }
