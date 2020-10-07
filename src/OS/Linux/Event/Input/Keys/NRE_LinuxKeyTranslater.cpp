
    /**
     * @file NRE_LinuxKeyTranslater.cpp
     * @brief Implementation of Event's API's Object : KeyTranslater
     * @author Louis ABEL
     * @date 12/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_LinuxKeyTranslater.hpp"
    #include <X11/XKBlib.h>
    #include "../../../../../System/Graphics/Driver/NRE_GraphicsDriver.hpp"

    using namespace NRE::Graphics;
    using namespace NRE::Core;

     namespace NRE {
         namespace Event {

            constexpr KeyTranslater::NativeKeyToKey KeyTranslater::translationMap[];

            KeyCode KeyTranslater::translateKey(XKeyEvent const& keyEvent) const {
                KeySym keySym = XkbKeycodeToKeysym(Singleton<GraphicsDriver>::get().getDisplay(), static_cast <KeyCode> (keyEvent.keycode), 0, keyEvent.state & ShiftMask ? 1 : 0);

                if (keySym == NoSymbol) {
                    return KeyCode::NONE;
                }
                if (keySym >= XK_a && keySym <= XK_z) {
                    return static_cast <KeyCode> (KeyCode::A + static_cast <KeyCode> (keySym - XK_a));
                }
                if (keySym >= XK_A && keySym <= XK_Z) {
                    return static_cast <KeyCode> (KeyCode::A + static_cast <KeyCode> (keySym - XK_A));
                }

                if (keySym == XK_0) {
                    return KeyCode::NUM_0;
                }
                if (keySym >= XK_1 && keySym <= XK_9) {
                    return static_cast <KeyCode> (KeyCode::NUM_1 + static_cast <KeyCode> (keySym - XK_1));
                }

                for (unsigned char i = 0; i < 108; i++) {
                    if (keySym == translationMap[i].keySym) {
                        return translationMap[i].key;
                    }
                }

                return KeyCode::NONE;
            }

         }
     }
