
    /**
     * @file NRE_InputManager.hpp
     * @brief Declaration of Event's API's Object : InputManager
     * @author Louis ABEL
     * @date 12/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include <vector>

    #ifdef _WIN32                           // Windows
        #include "../../../OS/Windows/Event/Input/Keys/NRE_WindowsKeyTranslater.hpp"
    #elif __linux__                         // Linux
        #include "../../../OS/Linux/Event/Input/Keys/NRE_LinuxKeyTranslater.hpp"
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
                    std::vector<KeyCode> keys;      /**< The active keys */

                public :    // Methods
                    //## Getter ##//
                        /**
                         * Tell if key is currently pressed
                         * @param  code the key code
                         * @return      if the key is pressed
                         */
                        bool isPressed(KeyCode code) const;

                    //## Methods ##//
                        #ifdef _WIN32                           // Windows
                            /**
                             * Translate a native key code into an NRE key
                             * @param  wParam additionnal message-specific information
                             * @param  lParam additionnal message-specific information
                             * @return        the translated key
                             */
                            KeyCode translateKey(WPARAM wParam, LPARAM lParam) const;
                        #elif __linux__                         // Linux
                            /**
                             * Translate a native key code into an NRE key
                             * @param keyEvent the native key press event
                             * @return         the translated key
                             */
                            KeyCode translateKey(XKeyEvent const& keyEvent) const;
                        #endif
                        /**
                         * Process a pressed key event
                         * @param key the pressed key
                         */
                        void processPressedKey(KeyCode key);
                        /**
                         * Process a released key event
                         * @param key the released key
                         */
                        void processReleasedKey(KeyCode key);
                        /**
                         * Update the active keys
                         */
                        void update();
            };
        }
    }
