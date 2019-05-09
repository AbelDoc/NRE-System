
    /**
     * @file NRE_WindowsWindowStyle.cpp
     * @brief Implementation of System's API's Object : WindowStyle
     * @author Louis ABEL
     * @date 09/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "../../../../../System/Graphics/Window/Style/NRE_WindowStyle.hpp"

     namespace NRE {
         namespace System {

             DWORD WindowStyle::toNativeStyle() const {
                 DWORD converted = WS_CAPTION | WS_MINIMIZEBOX | WS_VISIBLE;    // Basic
            	 if (style & CLOSEABLE) {                                       // Closeable
                     converted |= WS_SYSMENU;
                 }
                 if (style & RESIZEABLE) {                                      // Resizable
                     converted |= WS_SYSMENU | WS_THICKFRAME | WS_MAXIMIZEBOX;
                 }
                 return converted;
             }

        }
    }
