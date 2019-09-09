
    /**
     * @file NRE_GraphicsDriver.hpp
     * @brief Declaration of Graphics's API's Object : GraphicsDriver
     * @author Louis ABEL
     * @date 10/05/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

     #include <cstdlib>
     #include <iostream>

     #define GLEW_STATIC

     #ifdef GLEW_STATIC
         #define GLEWAPI extern
     #else
         #ifdef GLEW_BUILD
             #define GLEWAPI extern __declspec(dllexport)
         #else
             #define GLEWAPI extern __declspec(dllimport)
         #endif
     #endif

     #include <GL/glew.h>

     #ifdef _WIN32                           // Windows
        #include <Windows.h>
        #include <wingdi.h>
        #include <GL/wglew.h>
     #elif __linux__                         // Linux
        #include <X11/Xlib.h>
        #include <X11/Xatom.h>
        #include <X11/extensions/XInput2.h>
        #include <GL/glxew.h>
     #else
        #error "Not Supported Yet or Unknown compiler"
     #endif

     #include <Utility/UnorderedMap/NRE_UnorderedMap.hpp>
     #include <Utility/Singleton/NRE_Singleton.hpp>
     #include <Utility/Id/NRE_Id.hpp>

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

            typedef std::size_t Id;

            #ifdef _WIN32                           // Windows
                typedef HWND NativeWindowType;
            #elif __linux__                         // Linux
                typedef Window NativeWindowType;
            #endif

             /**
              * @class GraphicsDriver
              * @brief Manage the os-dependant graphics driver
              */
            class GraphicsDriver : public Utility::Singleton<GraphicsDriver> {
                friend Utility::Singleton<GraphicsDriver>;
                private :   // Fields
                    #ifdef __linux__               // Linux
                        Display* display;                                       /**< The X11 display connection */
                        Atom closeAtom;                                         /**< The internal atom for close */
                    #endif
                    Utility::UnorderedMap<NativeWindowType, Id> windows;        /**< Store all opened native windows */

                public :    // Methods
                    //## Move Constructor ##//
                        /**
                         * Move forbidden
                         * @param drv the graphics driver to move
                         */
                        GraphicsDriver(GraphicsDriver && drv) = delete;

                    //## Deconstructor ##//
                        /**
                         * GraphicsDriver Deconstructor
                         */
                        ~GraphicsDriver();

                    //## Getter ##//
                        #ifdef __linux__               // Linux
                            /**
                             * @return the driver display
                             */
                            Display* getDisplay();
                            /**
                             * @return the display close atom
                             */
                            Atom& getCloseAtom();
                        #endif
                        /**
                         * Register a window into the driver
                         * @param window the window to store
                         * @param id     the window id
                         */
                        void registerWindow(NativeWindowType window, Id id);
                        /**
                         * Unregister a window from the driver
                         * @param window the window to remove
                         */
                        void unregisterWindow(NativeWindowType window);
                        /**
                         * Find the window id associated with the given window
                         * @param  window the window to retrive the id
                         * @return        the corresponding id
                         */
                        Id findId(NativeWindowType window) const;

                    //## Assignment Operator ##//
                        /**
                         * Move forbidden
                         * @param drv the object to move into this
                         * @return    the reference of himself
                         */
                        GraphicsDriver& operator =(GraphicsDriver && drv) = delete;

                private :   // Methods
                    //## Constructor ##//
                        /**
                         * Construct the graphics driver
                         */
                        GraphicsDriver();

            };
        }
    }

    #include "NRE_GraphicsDriver.tpp"
    #ifdef _WIN32                           // Windows
        #include "../../../OS/Windows/Graphics/Driver/NRE_WindowsGraphicsDriver.tpp"
    #elif __linux__                         // Linux
        #include "../../../OS/Linux/Graphics/Driver/NRE_LinuxGraphicsDriver.tpp"
    #endif
