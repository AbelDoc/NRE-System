
    /**
     * @file NRE_Mouse.hpp
     * @brief Declaration of Event's API's Object : Mouse
     * @author Louis ABEL
     * @date 06/09/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include <Header/NRE_Math.hpp>

    #include "../../../Graphics/Window/Internal/NRE_InternalWindow.hpp"

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
             * @class Mouse
             * Represent an interface between the physical pointing device and the application cursor
             */
            class Mouse {
                private :   // Fields
                    Math::Point2D<unsigned int> position;       /**< The cursor current position */
                    Math::Point2D<unsigned int> lastPosition;   /**< The cursor last position */
                    Math::Vector2D<int> delta;                  /**< The cursor delta in the current motion */
                    bool relativeMode;                          /**< If the cursor is in relative motion mode */
                    #ifdef WIN32
                        bool registered;                        /**< If the cursor has been registered through raw input devices system */
                    #endif

                public :    // Methods
                    //## Constructor ##//
                        /**
                         * Default constructor
                         */
                        Mouse() = default;

                    //## Copy Constructor ##//
                        /**
                         * Copy m into this
                         * @param m the mouse to copy
                         */
                        Mouse(Mouse const& m) = default;

                    //## Move Constructor ##//
                        /**
                         * Move m into this
                         * @param m the mouse to move
                         */
                        Mouse(Mouse && m) = default;

                    //## Deconstructor ##//
                        /**
                         * Mouse Deconstructor
                         */
                        ~Mouse() = default;

                    //## Getter ##//
                        /**
                         * @return the cursor position
                         */
                        Math::Point2D<unsigned int> const& getPosition() const;
                        /**
                         * @return the cursor motion delta
                         */
                        Math::Vector2D<int> const& getDelta() const;
                        /**
                         * @return if we are in relative motion mode
                         */
                        bool isRelativeMode() const;

                    //## Setter ##//
                        /**
                         * Set the relative mode
                         * @param mode the new mode, true for relative
                         */
                        void setRelativeMode(bool mode);
                        /**
                         * Set the last position without updating other fields
                         * @param pos the last position
                         */
                        void setLastPosition(Math::Point2D<unsigned int> const& pos);

                    //## Methods ##//
                        #ifdef WIN32
                            /**
                             * Toggle the raw input devices system
                             * @param mode tell if we are registering or unregistering
                             */
                            void toggleRawInputDevices(bool mode);
                        #endif
                        /**
                         * Update the cursor
                         * @param pos the new position
                         */
                        void updateFromPosition(Math::Point2D<unsigned int> const& pos);
                        /**
                         * Update the cursor
                         * @param motion the cursor motion
                         */
                        void updateFromDelta(Math::Vector2D<int> const& motion);
                        #ifdef WIN32
                            /**
                             * Warp the cursor position to the given coordinates
                             * @param pos the new cursor position
                             */
                            void warpCursor(Math::Point2D<unsigned int> const& pos);
                        #elif __linux__
                            /**
                             * Warp the cursor position to the given coordinates
                             * @param pos the new cursor position
                             */
                            void warpCursor(Graphics::InternalWindow const& window, Math::Point2D<unsigned int> const& pos);
                        #endif
                        /**
                         * Show or hide the cursor
                         * @param mode the new mode, true to show it
                         */
                        void showCursor(bool mode);

                    //## Assignment Operator ##//
                        /**
                         * Copy m into this
                         * @param m the object to copy into this
                         * @return  the reference of himself
                         */
                        Mouse& operator =(Mouse const& m) = default;
                        /**
                         * Copy m into this
                         * @param m the object to copy into this
                         * @return  the reference of himself
                         */
                        Mouse& operator =(Mouse && m) = default;
            };

        }
    }

    #include "NRE_Mouse.tpp"
    #ifdef _WIN32                           // Windows
        #include "../../../../OS/Windows/Event/Input/Mouse/NRE_WindowsMouse.tpp"
    #elif __linux__                         // Linux
        #include "../../../../OS/Linux/Event/Input/Mouse/NRE_LinuxMouse.tpp"
    #endif
