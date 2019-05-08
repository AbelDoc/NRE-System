
    /**
     * @file NRE_GraphicsSystem.cpp
     * @brief Implementation of System's API's Object : GraphicsSystem
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_GraphicsSystem.hpp"

    using namespace NRE::Math;

     namespace NRE {
         namespace System {

             GraphicsSystem::~GraphicsSystem() {
                 for (auto& it : windows) {
                     it.second->close(false);
                 }
             }

             NRE::System::Window& GraphicsSystem::createWindow(std::string const& title, Math::Point2D<unsigned int> const& position, Math::Vector2D<unsigned int> const& size) {
                 windows.emplace(std::make_pair(counter, new NRE::System::Window(counter, title, position, size)));
                 counter++;
                 return *(windows[counter - 1]);
             }

             NRE::System::Window& GraphicsSystem::createWindow(std::string const& title, Math::Vector2D<unsigned int> const& size) {
                 windows.emplace(std::make_pair(counter, new NRE::System::Window(counter, title, size)));
                 counter++;
                 return *(windows[counter - 1]);
             }

             void GraphicsSystem::removeWindow(WindowId const& id) {
                 windows.erase(id);
             }

        }
    }
