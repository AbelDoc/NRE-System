
    /**
     * @file NRE_EventSystem.hpp
     * @brief Declaration of System's API's Object : EventSystem
     * @author Louis ABEL
     * @date 09/05/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include "../Graphics/Window/NRE_Window.hpp"
    #include "Input/Keys/NRE_Keys.hpp"

    /**
     * @namespace NRE
     * @brief The NearlyRealEngine's global namespace
     */
    namespace NRE {
        /**
         * @namespace System
         * @brief System's API
         */
        namespace System {

            /**
             * @class EventSystem
             * @brief Manage the event sub system
             */
            class EventSystem {
                public :    // Methods
                    //## Constructor ##//
                        /**
                         * Construct the sub system
                         */
                        EventSystem() = default;

                    //## Copy Constructor ##//
                        /**
                         * Copy forbidden
                         * @param sys the event system to copy
                         */
                        EventSystem(EventSystem const& sys) = delete;

                    //## Move Constructor ##//
                        /**
                         * Move forbidden
                         * @param sys the event system to move
                         */
                        EventSystem(EventSystem && sys) = delete;

                    //## Deconstructor ##//
                        /**
                         * EventSystem Deconstructor
                         */
                        ~EventSystem() = default;

                    //## Methods ##//
                        #ifdef _WIN32                           // Windows
                            /**
                             * Dispatch an event received from a given window
                             * @param  id     the window id
                             * @param  hwnd   the window handler
                             * @param  msg    the event message
                             * @param  wParam additionnal message-specific information
                             * @param  lParam additionnal message-specific information
                             * @return        depend on the message processing
                             */
                            LRESULT internalDispatcher(Graphics::WindowId id, HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
                        #elif __linux__
                            /**
                             * Dispatch an event
                             * @param event the event to dispatch
                             */
                            void internalDispatcher(XEvent const& event);
                            /**
                             * @return check if an event is available, to not block with X11 function
                             */
                            bool hasNextEvent();
                        #endif
                        /**
                         * Update the event system and dispatch event
                         */
                        void update();

                    //## Assignment Operator ##//
                        /**
                         * Copy forbidden
                         * @param sys the object to copy into this
                         * @return    the reference of himself
                         */
                        EventSystem& operator =(EventSystem const& sys) = delete;
                        /**
                         * Move forbidden
                         * @param sys the object to move into this
                         * @return    the reference of himself
                         */
                        EventSystem& operator =(EventSystem && sys) = delete;
            };
        }
    }
