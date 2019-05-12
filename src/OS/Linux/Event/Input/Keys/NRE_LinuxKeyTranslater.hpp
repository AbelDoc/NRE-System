
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
                        Key translateKey(XKeyEvent const& keyEvent) const;


                private :   // Static
                    /**
                     * @class NativeKeyToKey
                     * @brief Store the pair of native key sym to NRE key
                     */
                    struct NativeKeyToKey {
                        KeySym keySym;  /**< The key sym */
                        Key key;        /**< The associated NRE key */
                    };
                    /**
                     * Store the map used to translate native key,
                     * Derived from SDL KeySymToSDLScancode (file : SDL_x11keyboard.c)
                     */
                    static constexpr NativeKeyToKey translationMap[] {
                        { XK_Right,             Key::RIGHT },
                        { XK_Left,              Key::LEFT },
                        { XK_Down,              Key::DOWN },
                        { XK_Up,                Key::UP },
                        { XK_space,             Key::SPACE },
                        { XK_Return,            Key::ENTER },
                        { XK_Escape,            Key::ESCAPE },
                        { XK_BackSpace,         Key::BACKSPACE },
                        { XK_Tab,               Key::TAB },
                        { XK_Caps_Lock,         Key::CAPS_LOCK },
                        { XK_Control_L,         Key::LEFT_CONTROL },
                        { XK_Shift_L,           Key::LEFT_SHIFT },
                        { XK_Alt_L,             Key::LEFT_ALT },
                        { XK_Meta_L,            Key::LEFT_META },
                        { XK_Super_L,           Key::LEFT_META },
                        { XK_Control_R,         Key::RIGHT_CONTROL },
                        { XK_Shift_R,           Key::RIGHT_SHIFT },
                        { XK_Alt_R,             Key::RIGHT_ALT },
                        { XK_ISO_Level3_Shift,  Key::RIGHT_ALT },
                        { XK_Meta_R,            Key::RIGHT_META },
                        { XK_Super_R,           Key::RIGHT_META },
                        { XK_KP_End,            Key::KEYPAD_1 },
                        { XK_KP_Down,           Key::KEYPAD_2 },
                        { XK_KP_Next,           Key::KEYPAD_3 },
                        { XK_KP_Left,           Key::KEYPAD_4 },
                        { XK_KP_Begin,          Key::KEYPAD_5 },
                        { XK_KP_Right,          Key::KEYPAD_6 },
                        { XK_KP_Home,           Key::KEYPAD_7 },
                        { XK_KP_Up,             Key::KEYPAD_8 },
                        { XK_KP_Prior,          Key::KEYPAD_9 },
                        { XK_KP_Insert,         Key::KEYPAD_0 },
                        { XK_KP_1,              Key::KEYPAD_1 },
                        { XK_KP_2,              Key::KEYPAD_2 },
                        { XK_KP_3,              Key::KEYPAD_3 },
                        { XK_KP_4,              Key::KEYPAD_4 },
                        { XK_KP_5,              Key::KEYPAD_5 },
                        { XK_KP_6,              Key::KEYPAD_6 },
                        { XK_KP_7,              Key::KEYPAD_7 },
                        { XK_KP_8,              Key::KEYPAD_8 },
                        { XK_KP_9,              Key::KEYPAD_9 },
                        { XK_KP_0,              Key::KEYPAD_0 },
                        { XK_ampersand,         Key::NUM_1 },
                        { XK_eacute,            Key::NUM_2 },
                        { XK_quotedbl,          Key::NUM_3 },
                        { XK_apostrophe,        Key::NUM_4 },
                        { XK_parenleft,         Key::NUM_5 },
                        { XK_minus,             Key::NUM_6 },
                        { XK_egrave,            Key::NUM_7 },
                        { XK_underscore,        Key::NUM_8 },
                        { XK_ccedilla,          Key::NUM_9 },
                        { XK_agrave,            Key::NUM_0 },
                        { XK_parenright,        Key::RIGHT_BRACE },
                        { XK_F1,                Key::F1 },
                        { XK_F2,                Key::F2 },
                        { XK_F3,                Key::F3 },
                        { XK_F4,                Key::F4 },
                        { XK_F5,                Key::F5 },
                        { XK_F6,                Key::F6 },
                        { XK_F7,                Key::F7 },
                        { XK_F8,                Key::F8 },
                        { XK_F9,                Key::F9 },
                        { XK_F10,               Key::F10 },
                        { XK_F11,               Key::F11 },
                        { XK_F12,               Key::F12 },
                        { XK_Print,             Key::PRINT_SCREEN },
                        { XK_Scroll_Lock,       Key::SCROLL_LOCK },
                        { XK_Insert,            Key::INSERT },
                        { XK_Home,              Key::HOME },
                        { XK_Prior,             Key::PAGE_UP },
                        { XK_Delete,            Key::DELETE_KEY },
                        { XK_End,               Key::END },
                        { XK_Next,              Key::PAGE_DOWN },
                        { XK_Num_Lock,          Key::NUM_LOCK },
                        { XK_KP_Divide,         Key::KEYPAD_SLASH },
                        { XK_KP_Multiply,       Key::KEYPAD_ASTERISK },
                        { XK_KP_Subtract,       Key::KEYPAD_MINUS },
                        { XK_KP_Add,            Key::KEYPAD_PLUS },
                        { XK_KP_Enter,          Key::KEYPAD_ENTER },
                        { XK_KP_Delete,         Key::KEYPAD_DECIMAL },
                        { XK_KP_Decimal,        Key::KEYPAD_DECIMAL },
                        { XK_KP_Decimal,        Key::KEYPAD_DECIMAL },
                        { XK_Hyper_R,           Key::OPEN },
                        { XK_KP_Equal,          Key::KEYPAD_EQUALS },
                        { XK_F13,               Key::F13 },
                        { XK_F14,               Key::F14 },
                        { XK_F15,               Key::F15 },
                        { XK_F16,               Key::F16 },
                        { XK_F17,               Key::F17 },
                        { XK_F18,               Key::F18 },
                        { XK_F19,               Key::F19 },
                        { XK_F20,               Key::F20 },
                        { XK_F21,               Key::F21 },
                        { XK_F22,               Key::F22 },
                        { XK_F23,               Key::F23 },
                        { XK_F24,               Key::F24 },
                        { XK_Execute,           Key::OPEN },
                        { XK_Help,              Key::HELP },
                        { XK_Cancel,            Key::CANCEL },
                        { XK_KP_Separator,      Key::SEPARATOR },
                        { XK_Sys_Req,           Key::SYSREQ_ATTENTION },
                        { XK_period,            Key::DOT },
                        { XK_comma,             Key::COMMA },
                        { XK_slash,             Key::SLASH },
                        { XK_backslash,         Key::BACKSLASH },
                        { XK_minus,             Key::MINUS },
                        { XK_equal,             Key::KEYPAD_EQUALS },
                        { XK_grave,             Key::GRAVE },
                        { XK_bracketleft,       Key::LEFT_BRACE },
                        { XK_bracketright,      Key::RIGHT_BRACE }
                    };
            };
        }
    }
