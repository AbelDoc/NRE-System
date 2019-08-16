
    /**
     * @file NRE_Window.hpp
     * @brief Declaration of Graphics's API's Object : Window
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

     #include "Attributes/NRE_WindowAttributes.hpp"
     #include "Status/NRE_WindowStatus.hpp"
     #include "Internal/NRE_InternalWindow.hpp"
     #include "../Driver/Context/NRE_Context.hpp"

     #include <Utility/String/NRE_String.hpp>

     /**
      * @namespace NRE
      * @brief The NearlyRealEngine's global namespace
      */
     namespace NRE {
         /**
          * @namespace Graphics
          * @brief Graphics' API
          */
         namespace Graphics {

            /**
             * @class Window
             * @brief Manage a graphics window
             */
            class Window {
                private :   // Fields
                    InternalWindow window;          /**< The internal os-dependant window */
                    WindowAttributes attributes;    /**< The window attributes */
                    WindowStatus status;            /**< The window status */
                    WindowStyle style;              /**< The window style */
                    Id id;                          /**< The window id */
                    Context context;                /**< The window OpenGL context */

                public :    // Methods
                    //## Constructor ##//
                        /**
                         * No default constructor
                         */
                        Window() = delete;
                        /**
                         * Construct the window
                         * @param i    the window id
                         * @param t    the window title
                         * @param pos  the window top-left corner position
                         * @param s    the window size
                         * @param ws   the window style value
                         * @param attr the window context attributes
                         */
                        Window(Id const& i, Utility::String const& t, Math::Point2D<unsigned int> const& pos, Math::Vector2D<unsigned int> const& s, WindowStyle const& ws, ContextAttributes const& attr);
                        /**
                         * Construct the window with centered position
                         * @param i    the window id
                         * @param t    the window title
                         * @param s    the window size
                         * @param ws   the window style value
                         * @param attr the window context attributes
                         */
                        Window(Id const& i, Utility::String const& t, Math::Vector2D<unsigned int> const& s, WindowStyle const& ws, ContextAttributes const& attr);

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

                    //## Getter ##//
                        /**
                         * @return if the window is running
                         */
                        bool isRunning() const;
                        /**
                         * @return the window id
                         */
                        Id getId() const;

                    //## Methods ##//
                        /**
                         * Close the window and free all resources, don't use it after this operation
                         * @param removeFromSystem tell if the window has to be removed from the graphics system
                         */
                        void close(bool removeFromSystem = true);
                        /**
                         * Refresh the window screen
                         */
                        void refresh();

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
                        Utility::String toString() const;

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

     #include "NRE_Window.tpp"
