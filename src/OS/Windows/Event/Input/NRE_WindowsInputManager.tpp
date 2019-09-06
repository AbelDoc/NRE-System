
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

                inline ButtonCode InputManager::translateRawButton(RAWMOUSE* data) const {
                    ButtonCode code = ButtonCode::NO_BUTTON;
                    ULONG button = data->usButtonFlags;

                    if ((button & RI_MOUSE_BUTTON_1_DOWN) || (button & RI_MOUSE_BUTTON_1_UP)) {
                        code =  ButtonCode::LEFT_BUTTON;
                    } else if ((button & RI_MOUSE_BUTTON_2_DOWN) || (button & RI_MOUSE_BUTTON_2_UP)) {
                        code = ButtonCode::RIGHT_BUTTON;
                    } else if ((button & RI_MOUSE_BUTTON_3_DOWN) || (button & RI_MOUSE_BUTTON_3_UP)) {
                        code = ButtonCode::MIDDLE_BUTTON;
                    } else if ((button & RI_MOUSE_BUTTON_4_DOWN) || (button & RI_MOUSE_BUTTON_4_UP)) {
                        code = ButtonCode::X1_BUTTON;
                    } else if ((button & RI_MOUSE_BUTTON_5_DOWN) || (button & RI_MOUSE_BUTTON_5_UP)) {
                        code = ButtonCode::X2_BUTTON;
                    }
                    return code;
                }

         }
     }
