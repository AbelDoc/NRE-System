
    /**
     * @file NRE_WindowsKeyTranslater.cpp
     * @brief Implementation of Event's API's Object : KeyTranslater
     * @author Louis ABEL
     * @date 12/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_WindowsKeyTranslater.hpp"

     namespace NRE {
         namespace Event {

            Key KeyTranslater::translateKey(WPARAM wParam, LPARAM lParam) const {
                Key code = translationMap[static_cast <unsigned char> (wParam)];

                if (code == Key::CONTROL || code == Key::SHIFT || code == Key::ALT) {
                    int scanCode = (lParam >> 16) & 0xff;
                    bool isExtended = (lParam & (1 << 24)) != 0;

                    switch (code) {
                        case (Key::CONTROL) : {
                            if (isExtended) {
                                code = Key::RIGHT_CONTROL;
                            } else {
                                code = Key::LEFT_CONTROL;
                            }
                            break;
                        }
                        case (Key::SHIFT) : {
                            if (scanCode == 54) {
                                code = Key::RIGHT_SHIFT;
                            } else {
                                code = Key::LEFT_SHIFT;
                            }
                            break;
                        }
                        case (Key::ALT) : {
                            if (isExtended) {
                                code = Key::RIGHT_ALT;
                            } else {
                                code = Key::LEFT_ALT;
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
