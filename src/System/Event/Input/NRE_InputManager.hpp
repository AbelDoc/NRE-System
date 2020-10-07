
    /**
     * @file NRE_InputManager.hpp
     * @brief Declaration of Event's API's Object : InputManager
     * @author Louis ABEL
     * @date 12/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include <vector>
    #include <Header/NRE_Math.hpp>
    #include <Header/NRE_Core.hpp>

    #ifdef _WIN32                           // Windows
        #include "../../../OS/Windows/Event/Input/Keys/NRE_WindowsKeyTranslater.hpp"
    #elif __linux__                         // Linux
        #include "../../../OS/Linux/Event/Input/Keys/NRE_LinuxKeyTranslater.hpp"
    #else
       #error "Not Supported Yet or Unknown compiler"
    #endif


    #include "../Event/NRE_Event.hpp"
    #include "Mouse/NRE_Mouse.hpp"
    #include "../../../Header/NRE_Exception.hpp"

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
                    KeyTranslater keyTranslater;                  /**< Manage the translation of key event */
                    Mouse mouse;                                  /**< The interface to the application cursor */
                    Core::Vector<KeyCode> keys;                /**< The active keys */
                    Core::Vector<ButtonEventData> buttons;     /**< The active buttons */

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
                        /**
                         * @return if we are in relative motion mode
                         */
                        bool isRelativeMode() const;
                        /**
                         * @return the mouse interface
                         */
                        Mouse& getMouse();

                    //## Setter ##//
                        /**
                         * Set the relative motion mode
                         * @param mode toggle the mode, true to activate it
                         */
                        void setRelativeMode(bool mode);
                        /**
                         * Show or hide the cursor
                         * @param mode the new mode, true to show it
                         */
                        void showCursor(bool mode);

                    //## Methods ##//
                        #ifdef _WIN32                           // Windows
                            /**
                             * Translate a native key code into an NRE key
                             * @param  wParam additionnal message-specific information
                             * @param  lParam additionnal message-specific information
                             * @return        the translated key
                             */
                            KeyCode translateKey(WPARAM wParam, LPARAM lParam) const;
                            /**
                             * Translate a native button code into an NRE button
                             * @param  wParam additionnal message-specific information
                             * @return        the translated button
                             */
                            ButtonCode translateButton(WPARAM wParam) const;
                            /**
                             * Translate a raw mouse data into an NRE button
                             * @param  data the raw mouse data
                             * @return      the translated button
                             */
                            ButtonCode translateRawButton(RAWMOUSE* data) const;
                            /**
                             * Toggle the raw input devices system
                             * @param mode tell if we are (un)registering from the system
                             */
                            void toggleRawInputDevices(bool mode);
                        #elif __linux__                         // Linux
                            /**
                             * Translate a native key code into an NRE key
                             * @param keyEvent the native key press event
                             * @return         the translated key
                             */
                            KeyCode translateKey(XKeyEvent const& keyEvent) const;
                            /**
                             * Translate a native button code into an NRE button
                             * @param  buttonEvent the native button event
                             * @return             the translated button
                             */
                            ButtonCode translateButton(XButtonEvent const& buttonEvent) const;
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

    #include "NRE_InputManager.tpp"
    #ifdef _WIN32                           // Windows
        #include "../../../OS/Windows/Event/Input/NRE_WindowsInputManager.tpp"
    #elif __linux__                         // Linux
        #include "../../../OS/Linux/Event/Input/NRE_LinuxInputManager.tpp"
    #endif
