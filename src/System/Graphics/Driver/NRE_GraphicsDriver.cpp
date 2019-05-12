
    /**
     * @file NRE_GraphicsDriver.cpp
     * @brief Implementation of Graphics's API's Object : GraphicsDriver
     * @author Louis ABEL
     * @date 10/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_GraphicsDriver.hpp"

     namespace NRE {
         namespace Graphics {

            WindowId GraphicsDriver::findId(NativeWindowType window) const {
                auto it = windows.find(window);
                if (it != windows.end()) {
                    return it->second;
                }
                return 0;
            }

        }
    }
