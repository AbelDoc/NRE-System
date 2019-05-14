
    /**
     * @file NRE_Keys.hpp
     * @brief Declaration of Event's API's Object : Key mapping
     * @author Louis ABEL
     * @date 11/05/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

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
             * @enum KeyModifiers
             * Regroup key modifiers mask
             */
            enum class KeyModifiers {
                LEFT_CONTROL  = 0b00000001,
                LEFT_SHIFT    = 0b00000010,
                LEFT_ALT      = 0b00000100,
                LEFT_META     = 0b00001000,
                RIGHT_CONTROL = 0b00010000,
                RIGHT_SHIFT   = 0b00100000,
                RIGHT_ALT     = 0b01000000,
                RIGHT_META    = 0b10000000
            };

            /**
             * @enum KeyCode
             * Regroup all key codes, derived from https://source.android.com/devices/input/keyboard-devices.html
             */
            enum KeyCode : unsigned char {
                NONE                        = 0x00,
                ERR_ROV                     = 0x01,
                ERR_POST                    = 0x02,
                ERR_UDF                     = 0x03,

                A                           = 0x04,
                B                           = 0x05,
                C                           = 0x06,
                D                           = 0x07,
                E                           = 0x08,
                F                           = 0x09,
                G                           = 0x0a,
                H                           = 0x0b,
                I                           = 0x0c,
                J                           = 0x0d,
                K                           = 0x0e,
                L                           = 0x0f,
                M                           = 0x10,
                N                           = 0x11,
                O                           = 0x12,
                P                           = 0x13,
                Q                           = 0x14,
                R                           = 0x15,
                S                           = 0x16,
                T                           = 0x17,
                U                           = 0x18,
                V                           = 0x19,
                W                           = 0x1a,
                X                           = 0x1b,
                Y                           = 0x1c,
                Z                           = 0x1d,

                NUM_1                       = 0x1e,
                NUM_2                       = 0x1f,
                NUM_3                       = 0x20,
                NUM_4                       = 0x21,
                NUM_5                       = 0x22,
                NUM_6                       = 0x23,
                NUM_7                       = 0x24,
                NUM_8                       = 0x25,
                NUM_9                       = 0x26,
                NUM_0                       = 0x27,

                ENTER                       = 0x28,
                ESCAPE                      = 0x29,
                BACKSPACE                   = 0x2a,
                TAB                         = 0x2b,
                SPACE                       = 0x2c,
                MINUS                       = 0x2d,
                EQUAL                       = 0x2e,
                LEFT_BRACE                  = 0x2f,
                RIGHT_BRACE                 = 0x30,
                BACKSLASH                   = 0x31,
                NON_US_HASH_TILDE           = 0x32,
                SEMICOLON                   = 0x33,
                APOSTROPHE                  = 0x34,
                GRAVE                       = 0x35,
                COMMA                       = 0x36,
                DOT                         = 0x37,
                SLASH                       = 0x38,
                CAPS_LOCK                   = 0x39,

                F1                          = 0x3a,
                F2                          = 0x3b,
                F3                          = 0x3c,
                F4                          = 0x3d,
                F5                          = 0x3e,
                F6                          = 0x3f,
                F7                          = 0x40,
                F8                          = 0x41,
                F9                          = 0x42,
                F10                         = 0x43,
                F11                         = 0x44,
                F12                         = 0x45,

                PRINT_SCREEN                = 0x46,
                SCROLL_LOCK                 = 0x47,
                PAUSE                       = 0x48,
                INSERT                      = 0x49,
                HOME                        = 0x4a,
                PAGE_UP                     = 0x4b,
                DELETE_KEY                  = 0x4c,
                END                         = 0x4d,
                PAGE_DOWN                   = 0x4e,

                RIGHT                       = 0x4f,
                LEFT                        = 0x50,
                DOWN                        = 0x51,
                UP                          = 0x52,

                NUM_LOCK                    = 0x53,
                KEYPAD_SLASH                = 0x54,
                KEYPAD_ASTERISK             = 0x55,
                KEYPAD_MINUS                = 0x56,
                KEYPAD_PLUS                 = 0x57,
                KEYPAD_ENTER                = 0x58,
                KEYPAD_1                    = 0x59,
                KEYPAD_2                    = 0x5a,
                KEYPAD_3                    = 0x5b,
                KEYPAD_4                    = 0x5c,
                KEYPAD_5                    = 0x5d,
                KEYPAD_6                    = 0x5e,
                KEYPAD_7                    = 0x5f,
                KEYPAD_8                    = 0x60,
                KEYPAD_9                    = 0x61,
                KEYPAD_0                    = 0x62,
                KEYPAD_DOT                  = 0x63,

                NON_US_BACKSLASH            = 0x64,
                APPLICATION                 = 0x65,
                POWER                       = 0x66,
                KEYPAD_EQUALS               = 0x67,

                F13                         = 0x68,
                F14                         = 0x69,
                F15                         = 0x6a,
                F16                         = 0x6b,
                F17                         = 0x6c,
                F18                         = 0x6d,
                F19                         = 0x6e,
                F20                         = 0x6f,
                F21                         = 0x70,
                F22                         = 0x71,
                F23                         = 0x72,
                F24                         = 0x73,

                OPEN                        = 0x74,
                HELP                        = 0x75,
                PROPS                       = 0x76,
                FRONT                       = 0x77,
                STOP                        = 0x78,
                AGAIN                       = 0x79,
                UNDO                        = 0x7a,
                CUT                         = 0x7b,
                COPY                        = 0x7c,
                PASTE                       = 0x7d,
                FIND                        = 0x7e,
                MUTE                        = 0x7f,
                VOLUME_UP                   = 0x80,
                VOLUME_DOWN                 = 0x81,
                LOCKING_CAPS_LOCK           = 0x82,
                LOCKING_NUM_LOCK            = 0x83,
                LOCKING_SCROLL_LOCK         = 0x84,
                KEYPAD_COMMA                = 0x85,
                KEYPAD_EQUALS_SIGN          = 0x86,

                INTERNATIONAL_1             = 0x87,
                INTERNATIONAL_2             = 0x88,
                INTERNATIONAL_3             = 0x89,
                INTERNATIONAL_4             = 0x8a,
                INTERNATIONAL_5             = 0x8b,
                INTERNATIONAL_6             = 0x8c,
                INTERNATIONAL_7             = 0x8d,
                INTERNATIONAL_8             = 0x8e,
                INTERNATIONAL_9             = 0x8f,

                LANG_1                      = 0x90,
                LANG_2                      = 0x91,
                LANG_3                      = 0x92,
                LANG_4                      = 0x93,
                LANG_5                      = 0x94,
                LANG_6                      = 0x95,
                LANG_7                      = 0x96,
                LANG_8                      = 0x97,
                LANG_9                      = 0x98,

                ALT_ERASE                   = 0x99,
                SYSREQ_ATTENTION            = 0x9a,
                CANCEL                      = 0x9b,
                CLEAR                       = 0x9c,
                PRIOR                       = 0x9d,
                RETURN                      = 0x9e,
                SEPARATOR                   = 0x9f,
                OUT_KEY                     = 0xa0,
                OPER                        = 0xa1,
                CLEAR_AGAIN                 = 0xa2,
                CR_SEL_PROPS                = 0xa3,
                EX_SEL                      = 0xa4,

                CONTROL                     = 0xa5,     // Special key for left/right recognition
                SHIFT                       = 0xa6,     // Special key for left/right recognition
                ALT                         = 0xa7,     // Special key for left/right recognition

                KEYPAD_00                   = 0xb0,
                KEYPAD_000                  = 0xb1,
                THOUSANDS_SEPARATOR         = 0xb2,
                DECIMAL_SEPARATOR           = 0xb3,
                CURRENCY_UNIT               = 0xb4,
                CURRENCY_SUB_UNIT           = 0xb5,

                KEYPAD_LEFT_PARENTHESIS     = 0xb6,
                KEYPAD_RIGHT_PARENTHESIS    = 0xb7,
                KEYPAD_LEFT_BRACE           = 0xb8,
                KEYPAD_RIGHT_BRACE          = 0xb9,
                KEYPAD_TAB                  = 0xba,
                KEYPAD_BACKSPACE            = 0xbb,

                KEYPAD_A                    = 0xbc,
                KEYPAD_B                    = 0xbd,
                KEYPAD_C                    = 0xbe,
                KEYPAD_D                    = 0xbf,
                KEYPAD_E                    = 0xc0,
                KEYPAD_F                    = 0xc1,

                KEYPAD_XOR                  = 0xc2,
                KEYPAD_POWER                = 0xc3,
                KEYPAD_PERCENT              = 0xc4,
                KEYPAD_LESS                 = 0xc5,
                KEYPAD_GREATER              = 0xc6,
                KEYPAD_AMPERSAND            = 0xc7,
                KEYPAD_DOUBLE_AMPERSAND     = 0xc8,
                KEYPAD_VERTICAL_BAR         = 0xc9,
                KEYPAD_DOUBLE_VERTICAL_BAR  = 0xca,
                KEYPAD_COLON                = 0xcb,
                KEYPAD_HASH                 = 0xcc,
                KEYPAD_SPACE                = 0xcd,
                KEYPAD_AT                   = 0xce,
                KEYPAD_EXCLAMATION          = 0xcf,

                KEYPAD_MEM_STORE            = 0xd0,
                KEYPAD_MEM_RECALL           = 0xd1,
                KEYPAD_MEM_CLEAR            = 0xd2,
                KEYPAD_MEM_ADD              = 0xd3,
                KEYPAD_MEM_SUBTRACT         = 0xd4,
                KEYPAD_MEM_MULTIPLY         = 0xd5,
                KEYPAD_MEM_DIVIDE           = 0xd6,
                KEYPAD_PLUS_MINUS           = 0xd7,
                KEYPAD_CLEAR                = 0xd8,
                KEYPAD_CLEAR_ENTRY          = 0xd9,
                KEYPAD_BINARY               = 0xda,
                KEYPAD_OCTAL                = 0xdb,
                KEYPAD_DECIMAL              = 0xdc,
                KEYPAD_HEXADECIMAL          = 0xdd,

                LEFT_CONTROL                = 0xe0,
                LEFT_SHIFT                  = 0xe1,
                LEFT_ALT                    = 0xe2,
                LEFT_META                   = 0xe3,
                RIGHT_CONTROL               = 0xe4,
                RIGHT_SHIFT                 = 0xe5,
                RIGHT_ALT                   = 0xe6,
                RIGHT_META                  = 0xe7,

                MEDIA_PLAY_PAUSE            = 0xe8,
                MEDIA_STOP_CD               = 0xe9,
                MEDIA_PREVIOUS_SONG         = 0xea,
                MEDIA_NEXT_SONG             = 0xeb,
                MEDIA_EJECT_CD              = 0xec,
                MEDIA_VOLUME_UP             = 0xed,
                MEDIA_VOLUME_DOWN           = 0xee,
                MEDIA_MUTE                  = 0xef,
                MEDIA_WWW                   = 0xf0,
                MEDIA_BACK                  = 0xf1,
                MEDIA_FORWARD               = 0xf2,
                MEDIA_STOP                  = 0xf3,
                MEDIA_FIND                  = 0xf4,
                MEDIA_SCROLL_UP             = 0xf5,
                MEDIA_SCROLL_DOWN           = 0xf6,
                MEDIA_EDIT                  = 0xf7,
                MEDIA_SLEEP                 = 0xf8,
                MEDIA_COFFEE                = 0xf9,
                MEDIA_REFRESH               = 0xfa,
                MEDIA_CALC                  = 0xfb,

                BRIGHTNESS_DOWN             = 0xfc,
                BRIGHTNESS_UP               = 0xfd,
                DISPLAY_SWITCH              = 0xfe,

                NUM_KEYS                    = 0xff
            };

        }
    }
