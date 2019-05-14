
    /**
     * @file NRE_InputManager.hpp
     * @brief Declaration of Event's API's Object : InputManager
     * @author Louis ABEL
     * @date 12/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include <vector>
    #include <Header/NRE_Math.hpp>

    #ifdef _WIN32                           // Windows
        #include "../../../OS/Windows/Event/Input/Keys/NRE_WindowsKeyTranslater.hpp"
    #elif __linux__                         // Linux
        #include "../../../OS/Linux/Event/Input/Keys/NRE_LinuxKeyTranslater.hpp"
    #else
       #error "Not Supported Yet or Unknown compiler"
    #endif


    #include "../Event/NRE_Event.hpp"

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
                    KeyTranslater keyTranslater;              /**< Manage the translation of key event */
                    std::vector<KeyCode> keys;                /**< The active keys */
                    std::vector<ButtonEventData> buttons;     /**< The active buttons */

                public :    // Methods
                    //## Getter ##//
                        /**
                         * Tell if a key is currently pressed
                         * @param  code the key code
                         * @return      if the key is pressed
                         */
                        bool isKeyPressed(KeyCode code) const;
                        /**
                         * Tell if a button is currently pressed
                         * @param  code the button code
                         * @return      if the button is pressed
                         */
                        bool isButtonPressed(ButtonCode code) const;

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
                         * Process a pressed button event
                         * @param buttonData the pressed button data
                         */
                        void processPressedButton(ButtonEventData const& buttonData);
                        /**
                         * Process a released key event
                         * @param key the released key
                         */
                        void processReleasedKey(KeyCode key);
                        /**
                         * Process a released button event
                         * @param buttonData the pressed button data
                         */
                        void processReleasedButton(ButtonEventData const& buttonData);
                        /**
                         * Process active keys and buttons
                         */
                        void update();
                        /**
                         * Update a button event data
                         * @param buttonData the new data
                         */
                        void updateButtonEventData(ButtonEventData const& buttonData);
            };
        }
    }
