
    /**
     * @file NRE_GraphicsSystem.hpp
     * @brief Declaration of System's API's Object : GraphicsSystem
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include "Window/NRE_Window.hpp"

    #include <Utility/String/NRE_String.hpp>
    #include <Utility/UnorderedMap/NRE_UnorderedMap.hpp>

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
                    Utility::UnorderedMap<Graphics::Id, Graphics::Window*> windows;  /**< The system windows */
                    Graphics::Id counter;                                            /**< The window id counter */
                    bool running;                                                    /**< Tell if the system is running */

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
                        Graphics::Window& getWindow(Graphics::Id id);
                        /**
                         * Close a specific window
                         * @param id the window id
                         */
                        void closeWindow(Graphics::Id id);
                        /**
                         * @return if at least one window is opened
                         */
                        bool isRunning() const;

                    //## Methods ##//
                        /**
                         * Create a window and register it in the system
                         * @param title    the window title
                         * @param position the window top-left corner position
                         * @param size     the window size
                         * @param style    the window style
                         * @param attr     the window context attributes
                         * @return         the created window
                         */
                        Graphics::Window& createWindow(Utility::String const& title, Math::Point2D<unsigned int> const& position, Math::Vector2D<unsigned int> const& size, unsigned int style, Graphics::ContextAttributes const& attr);
                        /**
                         * Create a window and register it in the system
                         * @param title    the window title
                         * @param size     the window size
                         * @param style    the window style
                         * @param attr     the window context attributes
                         * @return         the created window
                         */
                        Graphics::Window& createWindow(Utility::String const& title, Math::Vector2D<unsigned int> const& size, unsigned int style, Graphics::ContextAttributes const& attr);
                        /**
                         * Remove the window corresponding to the given id
                         * @param id the window to remove
                         */
                        void removeWindow(Graphics::Id const& id);

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

    #include "NRE_GraphicsSystem.tpp"
