
    /**
     * @file NRE_Window.hpp
     * @brief Declaration of System's API's Object : Window
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

     #include "Attributes/NRE_WindowAttributes.hpp"
     #include "Status/NRE_WindowStatus.hpp"

     #ifdef _WIN32                           // Windows
        #include "../../../OS/Windows/Graphics/Window/Internal/NRE_WindowsInternalWindow.hpp"
     #elif __linux__                         // Linux
        #include "../../../OS/Linux/Graphics/Window/Internal/NRE_LinuxInternalWindow.hpp"
     #else
        #error "Not Supported Yet or Unknown compiler"
     #endif

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

            typedef std::size_t WindowId;

            /**
             * @class Window
             * @brief Manage a graphics window
             */
            class Window {
                private :   // Fields
                    InternalWindow window;          /**< The internal os-dependant window */
                    WindowAttributes attributes;    /**< The window attributes */
                    WindowStatus status;            /**< The window status */
                    WindowId id;                    /**< The window id */


                public :    // Methods
                    //## Constructor ##//
                        /**
                         * No default constructor
                         */
                        Window() = delete;
                        /**
                         * Construct the window
                         * @param i   the window id
                         * @param t   the window title
                         * @param pos the window top-left corner position
                         * @param s   the window size
                         */
                        Window(WindowId const& i, std::string const& t, Math::Point2D<unsigned int> const& pos, Math::Vector2D<unsigned int> const& s);
                        /**
                         * Construct the window with centered position
                         * @param i   the window id
                         * @param t   the window title
                         * @param s   the window size
                         */
                        Window(WindowId const& i, std::string const& t, Math::Vector2D<unsigned int> const& s);

                    //## Copy Constructor ##//
                        /**
                         * Copy forbidden
                         * @param w the window to copy
                         */
                        Window(Window const& w) = delete;

                    //## Copy Constructor ##//
                        /**
                         * Move forbidden
                         * @param w the window to move
                         */
                        Window(Window && w) = delete;

                    //## Deconstructor ##//
                        /**
                         * Window Deconstructor
                         */
                        ~Window();

                    //## Methods ##//
                        /**
                         * Close the window and free all resources, don't use it after this operation
                         * @param removeFromSystem tell if the window has to be removed from the graphics system
                         */
                        void close(bool removeFromSystem = true);

                    //## Assignment Operator ##//
                        /**
                         * Copy forbidden
                         * @param w the object to copy into this
                         * @return  the reference of himself
                         */
                        Window& operator =(Window const& w) = delete;
                        /**
                         * Move forbidden
                         * @param w the object to move into this
                         * @return  the reference of himself
                         */
                        Window& operator =(Window && w) = delete;

                    //## Stream Operator ##//
                        /**
                         * Convert the window into a string
                         * @return the converted window
                         */
                        std::string toString() const;

            };

            /**
             * Output stream operator for the object
             * @param  stream the stream to add the object's string representation
             * @param  o      the object to add in the stream
             * @return the    modified stream
             */
            std::ostream& operator <<(std::ostream& stream, Window const& o);
         }
     }
