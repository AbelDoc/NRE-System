
    /**
     * @file NRE_AbstractEventEmitter.hpp
     * @brief Declaration of Event's API's Object : AbstractEventEmitter
     * @author Louis ABEL
     * @date 14/05/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include <Header/NRE_Utility.hpp>

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
             * @class AbstractEventEmitter
             * @brief Abstract class for specialized event emission
             */
            class AbstractEventEmitter : public Utility::Observable {
                public :    // Fields
                    /**< Shortcut to hide the Category type */
                    typedef std::size_t Category;

                private :   // Fields
                    bool consumed;  /**< Used for event emission, tell if the emission has to be stopped */

                public  :   // Methods
                    //## Constructor ##//
                        /**
                         * Construct the emitter
                         */
                        AbstractEventEmitter() = default;

                    //## Copy Constructor ##//
                        /**
                         * Copy e into this
                         * @param e the event emitter to copy
                         */
                        AbstractEventEmitter(AbstractEventEmitter const& e) = default;

                    //## Move Constructor ##//
                        /**
                         * Move e into this
                         * @param e the event emitter to move
                         */
                        AbstractEventEmitter(AbstractEventEmitter && e) = default;

                    //## Deconstructor ##//
                        /**
                         * AbstractEventEmitter Deconstructor
                         */
                        virtual ~AbstractEventEmitter() = default;

                    //## Getter ##//
                        /**
                         * @return the consuemed state
                         */
                        bool isConsumed() const;

                    //## Setter ##//
                        /**
                         * Set the consumed state
                         * @param state the new consumed state
                         */
                        void setConsumed(bool state);

                    //## Assignment Operator ##//
                        /**
                         * Copy e into this
                         * @param e the object to copy into this
                         * @return  the reference of himself
                         */
                        AbstractEventEmitter& operator =(AbstractEventEmitter const& e) = default;
                        /**
                         * Move e into this
                         * @param e the object to move into this
                         * @return  the reference of himself
                         */
                        AbstractEventEmitter& operator =(AbstractEventEmitter && e) = default;

                public :    // Static
                    static Category counter;    /**< The category counter */
            };
        }
    }

    #include "NRE_AbstractEventEmitter.tpp"
