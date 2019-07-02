
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

     #ifdef _WIN32                           // Windows
        #include <Windows.h>
     #elif __linux__                         // Linux
        #include <X11/Xlib.h>
     #else
        #error "Not Supported Yet or Unknown compiler"
     #endif

     #include <Utility/UnorderedMap/NRE_UnorderedMap.hpp>

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
             * @enum GLAttributes
             * @brief Regroup all attributes that the user can modiy before create a GL context
             */
            enum class GLAttributes {
                RED_SIZE,               /**< The minimum number of bits for the red channel */
                GREEN_SIZE,             /**< The minimum number of bits for the green channel */
                BLUE_SIZE,              /**< The minimum number of bits for the blue channel */
                ALPHA_SIZE,             /**< The minimum number of bits for the alpha channel */
                BUFFER_SIZE,            /**< The minimum number of bits for the frame buffer size */
                DOUBLEBUFFER,           /**< Tell if the frame buffer is single or double buffered */
                DEPTH_SIZE,             /**< The minimum number of bits for the depth buffer size */
                STENCIL_SIZE,           /**< The minimum number of bits for the stencil buffer size */
                ACCUM_RED_SIZE,         /**< The minimum number of bits for the red channel of accumulation */
                ACCUM_GREEN_SIZE,       /**< The minimum number of bits for the green channel of accumulation */
                ACCUM_BLUE_SIZE,        /**< The minimum number of bits for the blue channel of accumulation */
                ACCUM_ALPHA_SIZE,       /**< The minimum number of bits for the alpha channel of accumulation */
                STEREO,                 /**< Tell if the output is Stereo 3D */
                MULTISAMPLE_BUFFERS,    /**< The number of buffer used for multisamples anti-aliasing */
                MULTISAMPLE_SAMPLES,    /**< The number of samples for each buffer used in multisamples anti-aliasing */
                ACCELERATED_VISUAL,     /**< Tell if we use hardware accelerated */
                MAJOR_VERSION,          /**< The major version of OpenGL */
                MINOR_VERSION           /**< The minor version of OpenGL */
            };

            typedef std::size_t WindowId;

            #ifdef _WIN32                           // Windows
                typedef HWND NativeWindowType;
            #elif __linux__                         // Linux
                typedef Window NativeWindowType;
            #endif

             /**
              * @class GraphicsDriver
              * @brief Manage the os-dependant graphics driver
              */
            class GraphicsDriver {
                private :   // Fields
                    #ifdef __linux__               // Linux
                        Display* display;                                       /**< The X11 display connection */
                        Atom closeAtom;                                         /**< The internal atom for close */
                    #endif
                    Utility::UnorderedMap<NativeWindowType, WindowId> windows;  /**< Store all opened native windows */


                public :    // Methods
                    //## Constructor ##//
                        /**
                         * Construct the graphics driver
                         */
                        GraphicsDriver();

                    //## Copy Constructor ##//
                        /**
                         * Copy forbidden
                         * @param drv the internal window to copy
                         */
                        GraphicsDriver(GraphicsDriver const& drv) = delete;

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
                        void registerWindow(NativeWindowType window, WindowId id);
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
                        WindowId findId(NativeWindowType window) const;

                    //## Assignment Operator ##//
                        /**
                         * Copy forbidden
                         * @param drv the object to copy into this
                         * @return    the reference of himself
                         */
                        GraphicsDriver& operator =(GraphicsDriver const& drv) = delete;
                        /**
                         * Move forbidden
                         * @param drv the object to move into this
                         * @return    the reference of himself
                         */
                        GraphicsDriver& operator =(GraphicsDriver && drv) = delete;

                public :    // Static
                    /**
                     * @return the driver instance
                     */
                    static GraphicsDriver& getDriver();
            };
        }
    }

    #include "NRE_GraphicsDriver.tpp"
    #ifdef _WIN32                           // Windows
        #include "../../../OS/Windows/Graphics/Driver/NRE_WindowsGraphicsDriver.tpp"
    #elif __linux__                         // Linux
        #include "../../../OS/Linux/Graphics/Driver/NRE_LinuxGraphicsDriver.tpp"
    #endif
