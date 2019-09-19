
    /**
     * @file NRE_WheelMotionEvent.hpp
     * @brief Declaration of Event's API's Object : WheelMotionEvent
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
             * @class WheelMotionEvent
             * @brief Manage a controller wheel motion event
             */
            class WheelMotionEvent {
                private:    //Fields
                    Math::Point2D<unsigned int> position;   /**< The cursor position on screen */
                    int delta;                              /**< The motion delta */

                public:    // Methods
                    //## Constructor ##//
                        /**
                         * Default constructor
                         */
                        WheelMotionEvent() = delete;
                        /**
                         * Construct the event
                         * @param pos the cursor position
                         * @param d   the motion delta
                         */
                        WheelMotionEvent(Math::Point2D<unsigned int> const& pos, int d);

                    //## Copy-Constructor ##//
                        /**
                         * Copy e into this
                         * @param e the motion event to copy
                         */
                        WheelMotionEvent(WheelMotionEvent const& e) = default;

                    //## Move-Constructor ##//
                        /**
                         * Move e into this
                         * @param e the motion event to move
                         */
                        WheelMotionEvent(WheelMotionEvent && e) = default;

                    //## Deconstructor ##//
                        /**
                         * WheelMotionEvent Deconstructor
                         */
                        ~WheelMotionEvent() = default;

                    //## Getter ##//
                        /**
                         * @return the cursor position
                         */
                        Math::Point2D<unsigned int> const& getPosition() const;
                        /**
                         * @return the motion delta
                         */
                        int getDelta() const;

                    //## Assignment Operator ##//
                        /**
                         * Copy e into this
                         * @param e the object to copy into this
                         * @return  the reference of himself
                         */
                        WheelMotionEvent& operator =(WheelMotionEvent const& e) = default;
                        /**
                         * Copy e into this
                         * @param e the object to copy into this
                         * @return  the reference of himself
                         */
                        WheelMotionEvent& operator =(WheelMotionEvent && e) = default;
            };
        }
    }

    #include "NRE_WheelMotionEvent.tpp"
