
    /**
     * @file NRE_LinuxInternalWindow.hpp
     * @brief Declaration of System's API's Object : InternalWindow
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

     #include <Header/NRE_Math.hpp>
     #include "../Style/NRE_WindowStyle.hpp"
     #include "../../Driver/NRE_GraphicsDriver.hpp"

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
              * @class InternalWindow
              * @brief Manage the internal os-dependant graphics window
              */
            class InternalWindow {
                private :   // Fields
                    NativeWindowType internal;    /**< The internal window */
                    WindowId id;                  /**< The OS-independant window id */
                    #ifdef __linux__               // Linux
                        int xId;                      /**< The X11 window id */
                    #endif

                public :    // Methods
                    //## Constructor ##//
                        /**
                         * No default constructor
                         */
                        InternalWindow() = delete;
                        /**
                         * Construct the internal window
                         * @param i        the window id
                         * @param title    the window title
                         * @param position the window top-left corner position
                         * @param size     the window size
                         * @param style    the window style
                         */
                        InternalWindow(WindowId i, std::string const& title, Math::Point2D<unsigned int> const& position, Math::Vector2D<unsigned int> const& size, WindowStyle const& style);
                        /**
                         * Construct the internal window with centered position
                         * @param i        the window id
                         * @param title    the window title
                         * @param size     the window size
                         * @param style    the window style
                         */
                        InternalWindow(WindowId i, std::string const& title, Math::Vector2D<unsigned int> const& size, WindowStyle const& style);

                    //## Copy Constructor ##//
                        /**
                         * Copy forbidden
                         * @param inl the internal window to copy
                         */
                        InternalWindow(InternalWindow const& inl) = delete;

                    //## Move Constructor ##//
                        /**
                         * Move forbidden
                         * @param inl the internal window to move
                         */
                        InternalWindow(InternalWindow && inl) = delete;

                    //## Deconstructor ##//
                        /**
                         * InternalWindow Deconstructor
                         */
                        ~InternalWindow() = default;

                    //## Getter ##//
                        /**
                         * @return the window top-left corner position
                         */
                        Math::Point2D<unsigned int> getPosition() const;

                    //## Methods ##//
                        /**
                         * Close the internal window
                         */
                        void close();

                    //## Assignment Operator ##//
                        /**
                         * Copy forbidden
                         * @param inl the object to copy into this
                         * @return    the reference of himself
                         */
                        InternalWindow& operator =(InternalWindow const& inl) = delete;
                        /**
                         * Move forbidden
                         * @param inl the object to move into this
                         * @return    the reference of himself
                         */
                        InternalWindow& operator =(InternalWindow && inl) = delete;

                private :   // Methods
                    #ifdef _WIN32               // Windows
                        /**
                         * Manage the internal dispatchment to the event system
                         * @param  hwnd   the window handler
                         * @param  msg    the event message
                         * @param  wParam additionnal message-specific information
                         * @param  lParam additionnal message-specific information
                         * @return        depend on the message processing
                         */
                        static LRESULT CALLBACK internalDispatcher(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
                        /**
                         * Compute the centered position for the window
                         * @param size the window size
                         * @return     the center point for the given size
                         */
                        static Math::Point2D<unsigned int> computeCenteredPosition(Math::Vector2D<unsigned int> size);
                    #elif __linux__                         // Linux
                        /**
                         * Update the window style
                         * @param style the window style to set
                         */
                        void updateStyle(WindowStyle const& style);
                        /**
                         * Finish the construction process by showing the window
                         * @param style the window style to set
                         * @param title the window title
                         */
                        void finishCreation(WindowStyle const& style, std::string const& title);
                    #endif
            };
        }
    }