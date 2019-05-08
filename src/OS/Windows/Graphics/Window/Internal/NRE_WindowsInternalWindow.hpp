
    /**
     * @file NRE_WindowsInternalWindow.hpp
     * @brief Declaration of System's API's Object : InternalWindow
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

     #include <Windows.h>

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
                    HWND internal;

                public :    // Methods
                    /**
                     * No default constructor
                     */
                    InternalWindow() = delete;
                    InternalWindow()

            };
        }
    }
