
    /**
     * @file NRE_Application.hpp
     * @brief Declaration of System's API's Object : Application
     * @author Louis ABEL
     * @date 09/07/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include "../NRE_System.hpp"
    #include <Core/Vector/NRE_Vector.hpp>

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
             * @class Application
             * @brief Manage an user application
             */
            class Application {
                private :   // Fields
                    Graphics::Window& window;                       /**< The application's window */
                    Core::Vector<Core::Observer*> handlers;   /**< The application's event handlers */

                public :    // Methods
                    //## Constructor ##//
                        /**
                         * No default constructor
                         */
                        Application() = delete;
                        /**
                         * Create the application from the window attributes
                         * @param title    the window title
                         * @param position the window position
                         * @param size     the window size
                         * @param style    the window style
                         * @param attr     the window OpenGL Context attributes
                         */
                        Application(Core::String const& title, Math::Point2D<unsigned int> const& position, Math::Vector2D<unsigned int> const& size, unsigned int style, Graphics::ContextAttributes const& attr = Graphics::ContextAttributes());
                        /**
                         * Create the application from the window attributes
                         * @param title    the window title
                         * @param size     the window size
                         * @param style    the window style
                         * @param attr     the window OpenGL Context attributes
                         */
                        Application(Core::String const& title, Math::Vector2D<unsigned int> const& size, unsigned int style, Graphics::ContextAttributes const& attr = Graphics::ContextAttributes());

                    //## Copy Constructor ##//
                        /**
                         * Copy forbidden
                         * @param app the application to copy
                         */
                        Application(Application const& app) = delete;

                    //## Move Constructor ##//
                        /**
                         * Move forbidden
                         * @param app the application to copy
                         */
                        Application(Application && app) = delete;

                    //## Deconstructor ##//
                        /**
                         * Application Deconstructor
                         */
                        virtual ~Application();

                    //## Methods ##//
                        /**
                         * Called at the application's creation
                         */
                        virtual void create() = 0;
                        /**
                         * Called before application's render, every frame
                         */
                        virtual void update() = 0;
                        /**
                         * Called after application's update, every frame
                         */
                        virtual void render() = 0;
                        /**
                         * Called at application's destruction
                         */
                        virtual void destroy() = 0;
                        /**
                         * Add an event handler
                         * @param handler the event handler function
                         */
                        template <class T>
                        void addHandler(typename Event::EventHandler<T>::Handler && handler);
                        /**
                         * The application entry point
                         */
                        void NREmain();

                    //## Assignment Operator ##//
                        /**
                         * Copy forbidden
                         * @param app the object to copy into this
                         * @return    the reference of himself
                         */
                        Application& operator =(Application const& app) = delete;
                        /**
                         * Move forbidden
                         * @param app the object to move into this
                         * @return    the reference of himself
                         */
                        Application& operator =(Application && app) = delete;

            };

        }
    }

    #include "NRE_Application.tpp"
