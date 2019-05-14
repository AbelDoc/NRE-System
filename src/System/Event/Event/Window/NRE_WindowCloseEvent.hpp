
    /**
     * @file NRE_WindowCloseEvent.hpp
     * @brief Declaration of Event's API's Object : WindowCloseEvent
     * @author Louis ABEL
     * @date 14/05/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include "../NRE_AbstractEvent.hpp"
    #include "../../../Graphics/NRE_GraphicsSystem.hpp"

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
             * @class WindowCloseEvent
             * @brief Manage a window close event
             */
            class WindowCloseEvent : public AbstractEvent {
                private:    //Fields
                    Graphics::Window& window;

                public:    // Methods
                    //## Constructor ##//
                        /**
                         * Default constructor
                         */
                        WindowCloseEvent() = delete;
                        /**
                         * Construct the event from the if of the closing window
                         * @param id the closing window
                         */
                        WindowCloseEvent(Graphics::WindowId id);

                    //## Copy-Constructor ##//
                        /**
                         * Copy e into this
                         * @param e the window close event to copy
                         */
                        WindowCloseEvent(WindowCloseEvent const& e) = default;

                    //## Move-Constructor ##//
                        /**
                         * Move e into this
                         * @param e the window close event to move
                         */
                        WindowCloseEvent(WindowCloseEvent && e) = default;

                    //## Deconstructor ##//
                        /**
                         * WindowCloseEvent Deconstructor
                         */
                        ~WindowCloseEvent() = default;

                    //## Getter ##//
                        /**
                         * @return the closing window
                         */
                        Graphics::Window& getWindow();

                    //## Assignment Operator ##//
                        /**
                         * Copy e into this
                         * @param e the object to copy into this
                         * @return  the reference of himself
                         */
                        WindowCloseEvent& operator =(WindowCloseEvent const& e) = default;
                        /**
                         * Copy e into this
                         * @param e the object to copy into this
                         * @return  the reference of himself
                         */
                        WindowCloseEvent& operator =(WindowCloseEvent && e) = default;
            };
        }
    }
