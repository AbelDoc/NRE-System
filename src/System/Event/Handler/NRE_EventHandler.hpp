
    /**
     * @file NRE_EventHandler.hpp
     * @brief Declaration of Event's API's Object : EventHandler
     * @author Louis ABEL
     * @date 14/05/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include <functional>
    #include <Header/NRE_Core.hpp>
    #include "../../NRE_System.hpp"

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
             * @class EventHandler
             * @brief Manage an event handler for a special type
             */
            template <class T>
            class EventHandler : public Core::Observer {
                public :     // Fields
                    /** Shortcut for handler type abstraction */
                    typedef std::function<bool(T&)> Handler;

                private :    // Fields
                    Handler handler;    /**< The handling function */

                public :     // Methods
                    //## Constructor ##//
                        /**
                         * Default constructor
                         */
                        EventHandler() = delete;
                        /**
                         * Construct an EventHandler with a passed lambda expression
                         * @param h the handler function
                         */
                        EventHandler(Handler && h);

                    //## Copy Constructor ##//
                        /**
                         * Copy forbidden
                         * @param h the event handler to copy
                         */
                        EventHandler(EventHandler const& h) = delete;

                    //## Move Constructor ##//
                        /**
                         * Move forbidden
                         * @param h the event handler to move
                         */
                        EventHandler(EventHandler && h) = delete;

                    //## Deconstructor ##//
                        /**
                         * EventHandler Deconstructor
                         */
                        ~EventHandler();

                    //## Methods ##//
                        /**
                         * Update the observer when the observable notify it
                         * @param obs the observed object
                         * @param arg notification data
                         */
                        void update(Core::Observable* obs, void* arg) override;

                    //## Assignment Operator ##//
                        /**
                         * Copy forbidden
                         * @param h the object to copy into this
                         * @return  the reference of himself
                         */
                        EventHandler& operator =(EventHandler const& h) = delete;
                        /**
                         * Move forbidden
                         * @param h the object to move into this
                         * @return  the reference of himself
                         */
                        EventHandler& operator =(EventHandler && h) = delete;
            };
        }
    }

    #include "NRE_EventHandler.tpp"
