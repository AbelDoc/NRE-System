
    /**
     * @file NRE_Buttons.hpp
     * @brief Declaration of Event's API's Object : Button mapping
     * @author Louis ABEL
     * @date 11/05/2019
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
             * @enum ButtonCode
             * Regroup all buttons codes
             */
            enum ButtonCode : unsigned char {
                NO_BUTTON          = 0x00,
                LEFT_BUTTON        = 0x01,
                MIDDLE_BUTTON      = 0x02,
                RIGHT_BUTTON       = 0x03,
                X1_BUTTON          = 0x04,
                X2_BUTTON          = 0x05,

                NUM_BUTTONS        = 0x06
            };
        }
    }
