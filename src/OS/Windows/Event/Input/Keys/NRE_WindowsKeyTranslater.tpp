
    /**
     * @file NRE_WindowsKeyTranslater.tpp
     * @brief Implementation of Event's API's Object : KeyTranslater
     * @author Louis ABEL
     * @date 12/05/2019
     * @copyright CC-BY-NC-SA
     */

     namespace NRE {
         namespace Event {

            inline KeyCode KeyTranslater::translateKey(WPARAM wParam, LPARAM lParam) const {
                KeyCode code = translationMap[static_cast <unsigned char> (wParam)];

                if (code == KeyCode::CONTROL || code == KeyCode::SHIFT || code == KeyCode::ALT) {
                    int scanCode = (lParam >> 16) & 0xff;
                    bool isExtended = (lParam & (1 << 24)) != 0;

                    switch (code) {
                        case (KeyCode::CONTROL) : {
                            if (isExtended) {
                                code = KeyCode::RIGHT_CONTROL;
                            } else {
                                code = KeyCode::LEFT_CONTROL;
                            }
                            break;
                        }
                        case (KeyCode::SHIFT) : {
                            if (scanCode == 54) {
                                code = KeyCode::RIGHT_SHIFT;
                            } else {
                                code = KeyCode::LEFT_SHIFT;
                            }
                            break;
                        }
                        case (KeyCode::ALT) : {
                            if (isExtended) {
                                code = KeyCode::RIGHT_ALT;
                            } else {
                                code = KeyCode::LEFT_ALT;
                            }
                            break;
                        }
                        default : {
                        }
                    }
                }

                return code;
            }

         }
     }
