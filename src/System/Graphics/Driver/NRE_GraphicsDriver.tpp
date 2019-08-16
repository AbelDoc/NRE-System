
    /**
     * @file NRE_GraphicsDriver.tpp
     * @brief Implementation of Graphics's API's Object : GraphicsDriver
     * @author Louis ABEL
     * @date 02/07/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Graphics {

            inline void GraphicsDriver::registerWindow(NativeWindowType window, Id id) {
                windows.emplace(Utility::Pair<NativeWindowType, Id>(window, id));
            }

            inline void GraphicsDriver::unregisterWindow(NativeWindowType window) {
                windows.erase(window);
            }

        }
    }
