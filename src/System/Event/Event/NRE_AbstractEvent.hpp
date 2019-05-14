
    /**
     * @file NRE_AbstractEvent.hpp
     * @brief Declaration of Event's API's Object : AbstractEvent
     * @author Louis ABEL
     * @date 14/05/2019
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
             * @class AbstractEvent
             * @brief Abstract class for emitted event
             * @warning Do not use this class for polymorphic usage, no virtual deconstructor in place
             */
            class AbstractEvent {
                private :    // Fields
                    bool consumed;  /**< The event consumed state */

                public :     // Methods
                    //## Constructor ##//
                        /**
                         * Construct the event
                         */
                        inline AbstractEvent() : consumed(false) {
                        }

                    //## Copy Constructor ##//
                        /**
                         * Copy e into this
                         * @param e the abstract event to copy
                         */
                        AbstractEvent(AbstractEvent const& e) = default;

                    //## Move Constructor ##//
                        /**
                         * Move e into this
                         * @param e the abstract event to move
                         */
                        AbstractEvent(AbstractEvent && e) = default;

                    //## Deconstructor ##//
                        /**
                         * AbstractEvent Deconstructor
                         */
                        ~AbstractEvent() = default;

                    //## Getter ##//
                        /**
                         * @return the consumed state
                         */
                        inline bool isConsumed() const {
                            return consumed;
                        }

                    //## Methods ##//
                        /**
                         * Consume the current event
                         */
                        inline void consume() {
                            consumed = true;
                        }

                    //## Assignment Operator ##//
                        /**
                         * Copy e into this
                         * @param e the object to copy into this
                         * @return  the reference of himself
                         */
                        AbstractEvent& operator =(AbstractEvent const& e) = default;
                        /**
                         * Move e into this
                         * @param e the object to move into this
                         * @return  the reference of himself
                         */
                        AbstractEvent& operator =(AbstractEvent && e) = default;
            };
        }
    }
