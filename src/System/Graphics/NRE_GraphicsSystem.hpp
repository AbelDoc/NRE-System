
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

    #include <Utility/String/NRE_String.hpp>

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
                    std::unordered_map<Graphics::WindowId, Graphics::Window*> windows;  /**< The system windows */
                    Graphics::WindowId counter;                                         /**< The window id counter */
                    bool running;                                                       /**< Tell if the system is running */

                public :    // Methods
                    //## Constructor ##//
                        /**
                         * Construct the sub system
                         */
                        GraphicsSystem() : counter(1), running(false) {
                        }

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
                        inline Graphics::Window& getWindow(Graphics::WindowId id) {
                            return *(windows.at(id));
                        }
                        /**
                         * Close a specific window
                         * @param id the window id
                         */
                        void closeWindow(Graphics::WindowId id);
                        /**
                         * @return if at least one window is opened
                         */
                        inline bool isRunning() const {
                            return running;
                        }

                    //## Methods ##//
                        /**
                         * Create a window and register it in the system
                         * @param title    the window title
                         * @param position the window top-left corner position
                         * @param size     the window size
                         * @param style    the window style
                         * @return         the created window
                         */
                        Graphics::Window& createWindow(Utility::String const& title, Math::Point2D<unsigned int> const& position, Math::Vector2D<unsigned int> const& size, unsigned int style);
                        /**
                         * Create a window and register it in the system
                         * @param title    the window title
                         * @param size     the window size
                         * @param style    the window style
                         * @return         the created window
                         */
                        Graphics::Window& createWindow(Utility::String const& title, Math::Vector2D<unsigned int> const& size, unsigned int style);
                        /**
                         * Remove the window corresponding to the given id
                         * @param id the window to remove
                         */
                        inline void removeWindow(Graphics::WindowId const& id) {
                            windows.erase(id);
                        }

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

                private :   // Methods
                    /**
                     * Check if at least one window is running
                     */
                    void checkRunningState();
            };
        }
    }
