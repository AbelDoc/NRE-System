
    /**
     * @file NRE_LinuxKeyTranslater.hpp
     * @brief Declaration of Event's API's Object : KeyTranslater
     * @author Louis ABEL
     * @date 12/05/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include "../../../../../System/Event/Input/Keys/NRE_Keys.hpp"
    #include <X11/Xlib.h>
    #include <X11/keysym.h>

    /**
     * @namespace NRE
     * @brief The NearlyRealEngine's global namespace
     */
    namespace NRE {
        /**
         * @namespace Event
         * @brief Event's API
         */
        namespace Event {

            /**
             * @class KeyTranslater
             * @brief Manage the translation of native key
             */
            class KeyTranslater {
                public :    // Methods
                    //## Methods ##//
                        /**
                         * Translate a native key code into an NRE key
                         * @param keyEvent the native key press event
                         * @return         the translated key
                         */
                        KeyCode translateKey(XKeyEvent const& keyEvent) const;


                private :   // Static
                    /**
                     * @class NativeKeyToKey
                     * @brief Store the pair of native key sym to NRE key
                     */
                    struct NativeKeyToKey {
                        KeySym keySym;  /**< The key sym */
                        KeyCode key;        /**< The associated NRE key */
                    };
                    /**
                     * Store the map used to translate native key,
                     * Derived from SDL KeySymToSDLScancode (file : SDL_x11keyboard.c)
                     */
                    static constexpr NativeKeyToKey translationMap[] {
                        { XK_Right,             KeyCode::RIGHT },
                        { XK_Left,              KeyCode::LEFT },
                        { XK_Down,              KeyCode::DOWN },
                        { XK_Up,                KeyCode::UP },
                        { XK_space,             KeyCode::SPACE },
                        { XK_Return,            KeyCode::ENTER },
                        { XK_Escape,            KeyCode::ESCAPE },
                        { XK_BackSpace,         KeyCode::BACKSPACE },
                        { XK_Tab,               KeyCode::TAB },
                        { XK_Caps_Lock,         KeyCode::CAPS_LOCK },
                        { XK_Control_L,         KeyCode::LEFT_CONTROL },
                        { XK_Shift_L,           KeyCode::LEFT_SHIFT },
                        { XK_Alt_L,             KeyCode::LEFT_ALT },
                        { XK_Meta_L,            KeyCode::LEFT_META },
                        { XK_Super_L,           KeyCode::LEFT_META },
                        { XK_Control_R,         KeyCode::RIGHT_CONTROL },
                        { XK_Shift_R,           KeyCode::RIGHT_SHIFT },
                        { XK_Alt_R,             KeyCode::RIGHT_ALT },
                        { XK_ISO_Level3_Shift,  KeyCode::RIGHT_ALT },
                        { XK_Meta_R,            KeyCode::RIGHT_META },
                        { XK_Super_R,           KeyCode::RIGHT_META },
                        { XK_KP_End,            KeyCode::KEYPAD_1 },
                        { XK_KP_Down,           KeyCode::KEYPAD_2 },
                        { XK_KP_Next,           KeyCode::KEYPAD_3 },
                        { XK_KP_Left,           KeyCode::KEYPAD_4 },
                        { XK_KP_Begin,          KeyCode::KEYPAD_5 },
                        { XK_KP_Right,          KeyCode::KEYPAD_6 },
                        { XK_KP_Home,           KeyCode::KEYPAD_7 },
                        { XK_KP_Up,             KeyCode::KEYPAD_8 },
                        { XK_KP_Prior,          KeyCode::KEYPAD_9 },
                        { XK_KP_Insert,         KeyCode::KEYPAD_0 },
                        { XK_KP_1,              KeyCode::KEYPAD_1 },
                        { XK_KP_2,              KeyCode::KEYPAD_2 },
                        { XK_KP_3,              KeyCode::KEYPAD_3 },
                        { XK_KP_4,              KeyCode::KEYPAD_4 },
                        { XK_KP_5,              KeyCode::KEYPAD_5 },
                        { XK_KP_6,              KeyCode::KEYPAD_6 },
                        { XK_KP_7,              KeyCode::KEYPAD_7 },
                        { XK_KP_8,              KeyCode::KEYPAD_8 },
                        { XK_KP_9,              KeyCode::KEYPAD_9 },
                        { XK_KP_0,              KeyCode::KEYPAD_0 },
                        { XK_ampersand,         KeyCode::NUM_1 },
                        { XK_eacute,            KeyCode::NUM_2 },
                        { XK_quotedbl,          KeyCode::NUM_3 },
                        { XK_apostrophe,        KeyCode::NUM_4 },
                        { XK_parenleft,         KeyCode::NUM_5 },
                        { XK_minus,             KeyCode::NUM_6 },
                        { XK_egrave,            KeyCode::NUM_7 },
                        { XK_underscore,        KeyCode::NUM_8 },
                        { XK_ccedilla,          KeyCode::NUM_9 },
                        { XK_agrave,            KeyCode::NUM_0 },
                        { XK_parenright,        KeyCode::RIGHT_BRACE },
                        { XK_F1,                KeyCode::F1 },
                        { XK_F2,                KeyCode::F2 },
                        { XK_F3,                KeyCode::F3 },
                        { XK_F4,                KeyCode::F4 },
                        { XK_F5,                KeyCode::F5 },
                        { XK_F6,                KeyCode::F6 },
                        { XK_F7,                KeyCode::F7 },
                        { XK_F8,                KeyCode::F8 },
                        { XK_F9,                KeyCode::F9 },
                        { XK_F10,               KeyCode::F10 },
                        { XK_F11,               KeyCode::F11 },
                        { XK_F12,               KeyCode::F12 },
                        { XK_Print,             KeyCode::PRINT_SCREEN },
                        { XK_Scroll_Lock,       KeyCode::SCROLL_LOCK },
                        { XK_Insert,            KeyCode::INSERT },
                        { XK_Home,              KeyCode::HOME },
                        { XK_Prior,             KeyCode::PAGE_UP },
                        { XK_Delete,            KeyCode::DELETE_KEY },
                        { XK_End,               KeyCode::END },
                        { XK_Next,              KeyCode::PAGE_DOWN },
                        { XK_Num_Lock,          KeyCode::NUM_LOCK },
                        { XK_KP_Divide,         KeyCode::KEYPAD_SLASH },
                        { XK_KP_Multiply,       KeyCode::KEYPAD_ASTERISK },
                        { XK_KP_Subtract,       KeyCode::KEYPAD_MINUS },
                        { XK_KP_Add,            KeyCode::KEYPAD_PLUS },
                        { XK_KP_Enter,          KeyCode::KEYPAD_ENTER },
                        { XK_KP_Delete,         KeyCode::KEYPAD_DECIMAL },
                        { XK_KP_Decimal,        KeyCode::KEYPAD_DECIMAL },
                        { XK_KP_Decimal,        KeyCode::KEYPAD_DECIMAL },
                        { XK_Hyper_R,           KeyCode::OPEN },
                        { XK_KP_Equal,          KeyCode::KEYPAD_EQUALS },
                        { XK_F13,               KeyCode::F13 },
                        { XK_F14,               KeyCode::F14 },
                        { XK_F15,               KeyCode::F15 },
                        { XK_F16,               KeyCode::F16 },
                        { XK_F17,               KeyCode::F17 },
                        { XK_F18,               KeyCode::F18 },
                        { XK_F19,               KeyCode::F19 },
                        { XK_F20,               KeyCode::F20 },
                        { XK_F21,               KeyCode::F21 },
                        { XK_F22,               KeyCode::F22 },
                        { XK_F23,               KeyCode::F23 },
                        { XK_F24,               KeyCode::F24 },
                        { XK_Execute,           KeyCode::OPEN },
                        { XK_Help,              KeyCode::HELP },
                        { XK_Cancel,            KeyCode::CANCEL },
                        { XK_KP_Separator,      KeyCode::SEPARATOR },
                        { XK_Sys_Req,           KeyCode::SYSREQ_ATTENTION },
                        { XK_period,            KeyCode::DOT },
                        { XK_comma,             KeyCode::COMMA },
                        { XK_slash,             KeyCode::SLASH },
                        { XK_backslash,         KeyCode::BACKSLASH },
                        { XK_minus,             KeyCode::MINUS },
                        { XK_equal,             KeyCode::KEYPAD_EQUALS },
                        { XK_grave,             KeyCode::GRAVE },
                        { XK_bracketleft,       KeyCode::LEFT_BRACE },
                        { XK_bracketright,      KeyCode::RIGHT_BRACE }
                    };
            };
        }
    }
