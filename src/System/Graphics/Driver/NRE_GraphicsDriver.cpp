
    /**
     * @file NRE_GraphicsDriver.cpp
     * @brief Implementation of System's API's Object : GraphicsDriver
     * @author Louis ABEL
     * @date 10/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_GraphicsDriver.hpp"

     namespace NRE {
         namespace System {

            void GraphicsDriver::registerWindow(NativeWindowType window, WindowId id) {
                windows.emplace(std::make_pair(window, id));
            }

            void GraphicsDriver::unregisterWindow(NativeWindowType window) {
                windows.erase(window);
            }

            WindowId GraphicsDriver::findId(NativeWindowType window) const {
                auto it = windows.find(window);
                if (it != windows.end()) {
                    return it->second;
                }
                return 0;
            }

            GraphicsDriver& GraphicsDriver::getDriver() {
                static GraphicsDriver instance;
                return instance;
            }

        }
    }
