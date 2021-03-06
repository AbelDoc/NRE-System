
    /**
     * @file NRE_GraphicsSystem.tpp
     * @brief Implementation of System's API's Object : GraphicsSystem
     * @author Louis ABEL
     * @date 02/07/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace System {

            inline GraphicsSystem::GraphicsSystem() : counter(1), running(false) {
            }

            inline Graphics::Window& GraphicsSystem::getWindow(Graphics::Id id) {
                return *(windows.get(id));
            }

            inline bool GraphicsSystem::isRunning() const {
                return running;
            }

            inline void GraphicsSystem::removeWindow(Graphics::Id const& id) {
                delete windows.get(id);
                windows.erase(id);
            }

        }
    }
