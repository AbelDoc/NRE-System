
    /**
     * @file NRE_EventEmitter.hpp
     * @brief Declaration of Event's API's Object : EventEmitter
     * @author Louis ABEL
     * @date 14/05/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include "NRE_AbstractEventEmitter.hpp"

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
             * @class EventEmitter
             * @brief Manage event emission to all listener
             */
            template <class T>
            class EventEmitter : public AbstractEventEmitter {
                public  :   // Methods
                    //## Constructor ##//
                        /**
                         * Construct the emitter
                         */
                        EventEmitter() = default;

                    //## Copy Constructor ##//
                        /**
                         * Copy e into this
                         * @param e the event emitter to copy
                         */
                        EventEmitter(EventEmitter const& e) = default;

                    //## Move Constructor ##//
                        /**
                         * Move e into this
                         * @param e the event emitter to move
                         */
                        EventEmitter(EventEmitter && e) = default;

                    //## Deconstructor ##//
                        /**
                         * EventEmitter Deconstructor
                         */
                        ~EventEmitter() = default;

                    //## Methods ##//
                        /**
                         * Emit a T event, created from passed argument pack
                         * @param args the T event construction's argument
                         */
                        template <class ... Args>
                        inline void emit(Args && ... args) {
                            T event(std::forward<Args>(args)...);
                            auto it = begin();
                            while (!event.isConsumed() && it != end()) {
                                (*it)->update(this, &event);
                                it++;
                            }
                        }

                    //## Assignment Operator ##//
                        /**
                         * Copy e into this
                         * @param e the object to copy into this
                         * @return  the reference of himself
                         */
                        EventEmitter& operator =(EventEmitter const& e) = default;
                        /**
                         * Move e into this
                         * @param e the object to move into this
                         * @return  the reference of himself
                         */
                        EventEmitter& operator =(EventEmitter && e) = default;

                public :    // Static
                    /**
                     * @return the T event emitter category
                     */
                    static Category getCategory() {
                        static Category category = counter++;
                        return category;
                    }
            };
        }
    }
