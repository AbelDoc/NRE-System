
    /**
     * @file NRE_LinuxGraphicsDriver.hpp
     * @brief Declaration of System's API's Object : GraphicsDriver
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

     #include <cstdlib>
     #include <iostream>
     #include <X11/Xlib.h>

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
              * @class GraphicsDriver
              * @brief Manage the os-dependant graphics driver
              */
            class GraphicsDriver {
                private :   // Fields
                    Display* display;   /**< The X11 display connection */

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
                        /**
                         * @return the driver display
                         */
                        Display* getDisplay();

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
