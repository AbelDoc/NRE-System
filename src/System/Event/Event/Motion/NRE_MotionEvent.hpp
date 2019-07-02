
    /**
     * @file NRE_MotionEvent.hpp
     * @brief Declaration of Event's API's Object : MotionEvent
     * @author Louis ABEL
     * @date 14/05/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include <Header/NRE_Math.hpp>

    #include "../../Input/Buttons/NRE_Buttons.hpp"

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
             * @class MotionEvent
             * @brief Manage a controller motion event
             */
            class MotionEvent {
                private:    //Fields
                    ButtonCode code;                        /**< The button's code */
                    Math::Point2D<unsigned int> position;   /**< The cursor position */

                public:    // Methods
                    //## Constructor ##//
                        /**
                         * Default constructor
                         */
                        MotionEvent() = delete;
                        /**
                         * Construct the event
                         * @param c   the button code
                         * @param pos the curosr position
                         */
                        MotionEvent(ButtonCode c, Math::Point2D<unsigned int> const& pos);

                    //## Copy-Constructor ##//
                        /**
                         * Copy e into this
                         * @param e the motion event to copy
                         */
                        MotionEvent(MotionEvent const& e) = default;

                    //## Move-Constructor ##//
                        /**
                         * Move e into this
                         * @param e the motion event to move
                         */
                        MotionEvent(MotionEvent && e) = default;

                    //## Deconstructor ##//
                        /**
                         * MotionEvent Deconstructor
                         */
                        ~MotionEvent() = default;

                    //## Getter ##//
                        /**
                         * @return the button's code
                         */
                        ButtonCode getCode() const;
                        /**
                         * @return the cursor position
                         */
                        Math::Point2D<unsigned int> const& getPosition() const;
                        /**
                         * Compare the event code to the given one
                         * @param  c a button code
                         * @return   the test's result
                         */
                        bool isCode(ButtonCode c) const;

                    //## Assignment Operator ##//
                        /**
                         * Copy e into this
                         * @param e the object to copy into this
                         * @return  the reference of himself
                         */
                        MotionEvent& operator =(MotionEvent const& e) = default;
                        /**
                         * Copy e into this
                         * @param e the object to copy into this
                         * @return  the reference of himself
                         */
                        MotionEvent& operator =(MotionEvent && e) = default;

                    //## Comparison Operator ##//
                        /**
                         * Equality test between this and an object
                         * @param e the other object
                         * @return  the test result
                         */
                        bool operator ==(MotionEvent const& e) const;
            };
        }
    }

    #include "NRE_MotionEvent.tpp"
