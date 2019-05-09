
    /**
     * @file NRE_GraphicsSystem.hpp
     * @brief Declaration of System's API's Object : GraphicsSystem
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include <string>
    #include <unordered_map>

    #include "Window/NRE_Window.hpp"

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
             * @class GraphicsSystem
             * @brief Manage the graphics sub system
             */
            class GraphicsSystem {
                private :   // Fields
                    std::unordered_map<WindowId, NRE::System::Window*> windows;   /**< The system windows */
                    WindowId counter;

                public :    // Methods
                    //## Constructor ##//
                        /**
                         * Construct the sub system
                         */
                        GraphicsSystem();

                    //## Copy Constructor ##//
                        /**
                         * Copy forbidden
                         * @param sys the graphics system to copy
                         */
                        GraphicsSystem(GraphicsSystem const& sys) = delete;

                    //## Move Constructor ##//
                        /**
                         * Move forbidden
                         * @param sys the graphics system to move
                         */
                        GraphicsSystem(GraphicsSystem && sys) = delete;

                    //## Deconstructor ##//
                        /**
                         * GraphicsSystem Deconstructor
                         */
                        ~GraphicsSystem();

                    //## Getter ##//
                        /**
                         * Query a specific window
                         * @param  id the window id
                         * @return    the corresponding window
                         */
                        NRE::System::Window& getWindow(WindowId id);
                        /**
                         * Close a specific window
                         * @param id the window id
                         */
                        void closeWindow(WindowId id);

                    //## Methods ##//
                        /**
                         * Create a window and register it in the system
                         * @param title    the window title
                         * @param position the window top-left corner position
                         * @param size     the window size
                         * @param style    the window style
                         * @return         the created window
                         */
                        NRE::System::Window& createWindow(std::string const& title, Math::Point2D<unsigned int> const& position, Math::Vector2D<unsigned int> const& size, unsigned int style);
                        /**
                         * Create a window and register it in the system
                         * @param title    the window title
                         * @param size     the window size
                         * @param style    the window style
                         * @return         the created window
                         */
                        NRE::System::Window& createWindow(std::string const& title, Math::Vector2D<unsigned int> const& size, unsigned int style);
                        /**
                         * Remove the window corresponding to the given id
                         * @param id the window to remove
                         */
                        void removeWindow(WindowId const& id);

                    //## Assignment Operator ##//
                        /**
                         * Copy forbidden
                         * @param sys the object to copy into this
                         * @return    the reference of himself
                         */
                        GraphicsSystem& operator =(GraphicsSystem const& sys) = delete;
                        /**
                         * Move forbidden
                         * @param sys the object to move into this
                         * @return    the reference of himself
                         */
                        GraphicsSystem& operator =(GraphicsSystem && sys) = delete;
            };
        }
    }
