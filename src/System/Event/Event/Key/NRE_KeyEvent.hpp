
    /**
     * @file NRE_KeyEvent.hpp
     * @brief Declaration of Event's API's Object : KeyEvent
     * @author Louis ABEL
     * @date 14/05/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include "../../Input/Keys/NRE_Keys.hpp"

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
             * @class KeyEvent
             * @brief Manage a key event
             */
            class KeyEvent {
                private:    //Fields
                    KeyCode code;   /**< The key's code */

                public:    // Methods
                    //## Constructor ##//
                        /**
                         * Default constructor
                         */
                        KeyEvent() = delete;
                        /**
                         * Construct the event from the key code
                         * @param c the key code
                         */
                        KeyEvent(KeyCode c) : code(c) {
                        }

                    //## Copy-Constructor ##//
                        /**
                         * Copy e into this
                         * @param e the key event to copy
                         */
                        KeyEvent(KeyEvent const& e) = default;

                    //## Move-Constructor ##//
                        /**
                         * Move e into this
                         * @param e the key event to move
                         */
                        KeyEvent(KeyEvent && e) = default;

                    //## Deconstructor ##//
                        /**
                         * KeyEvent Deconstructor
                         */
                        ~KeyEvent() = default;

                    //## Getter ##//
                        /**
                         * @return the key's code
                         */
                        inline KeyCode getCode() const {
                            return code;
                        }
                        /**
                         * Compare the event code to the given one
                         * @param  c a key code
                         * @return   the test's result
                         */
                        bool isCode(KeyCode c) const {
                            return code == c;
                        }

                    //## Assignment Operator ##//
                        /**
                         * Copy e into this
                         * @param e the object to copy into this
                         * @return  the reference of himself
                         */
                        KeyEvent& operator =(KeyEvent const& e) = default;
                        /**
                         * Copy e into this
                         * @param e the object to copy into this
                         * @return  the reference of himself
                         */
                        KeyEvent& operator =(KeyEvent && e) = default;
            };
        }
    }
