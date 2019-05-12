
    /**
     * @file NRE_InputManager.hpp
     * @brief Declaration of Event's API's Object : InputManager
     * @author Louis ABEL
     * @date 12/05/2019
     * @copyright CC-BY-NC-SA
     */

    #ifdef _WIN32                           // Windows
        #include "../../../OS/Windows/Event/Input/Keys/NRE_WindowsKeyTranslater.hpp"
    #elif __linux__                         // Linux
        #include "../../../OS/Linux/Event/Input/Keys/NRE_WindowsKeyTranslater.hpp"
    #else
       #error "Not Supported Yet or Unknown compiler"
    #endif

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
             * @class InputManager
             * @brief Manage the process of native input
             */
            class InputManager {
                private :   // Fields
                    KeyTranslater keyTranslater;    /**< Manage the translation of key event */

                public :    // Methods
                    #ifdef _WIN32                           // Windows
                        /**
                         * Translate a native key code into an NRE key
                         * @param  wParam additionnal message-specific information
                         * @param  lParam additionnal message-specific information
                         * @return        the translated key
                         */
                        Key translateKey(WPARAM wParam, LPARAM lParam) const;
                    #endif
            };
        }
    }
