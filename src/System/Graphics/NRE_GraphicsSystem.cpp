
    /**
     * @file NRE_GraphicsSystem.cpp
     * @brief Implementation of System's API's Object : GraphicsSystem
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_GraphicsSystem.hpp"

    using namespace NRE::Math;
    using namespace NRE::Graphics;

     namespace NRE {
         namespace System {

             GraphicsSystem::GraphicsSystem() : counter(1), running(false) {
             }

             GraphicsSystem::~GraphicsSystem() {
                 for (auto& it : windows) {
                     it.second->close(false);
                 }
             }

             Graphics::Window& GraphicsSystem::getWindow(WindowId id) {
                 return *(windows.at(id));
             }

             void GraphicsSystem::closeWindow(WindowId id) {
                 getWindow(id).close();
                 checkRunningState();
             }

             bool GraphicsSystem::isRunning() const {
                 return running;
             }

             void GraphicsSystem::checkRunningState() {
                 running = false;
                 auto it = windows.begin();
                 while (!running && it != windows.end()) {
                     running = !it->second->isRunning();
                     it++;
                 }
             }

             Graphics::Window& GraphicsSystem::createWindow(std::string const& title, Math::Point2D<unsigned int> const& position, Math::Vector2D<unsigned int> const& size, unsigned int style) {
                 windows.emplace(std::make_pair(counter, new Graphics::Window(counter, title, position, size, WindowStyle(style))));
                 counter++;
                 running = true;
                 return *(windows[counter - 1]);
             }

             Graphics::Window& GraphicsSystem::createWindow(std::string const& title, Math::Vector2D<unsigned int> const& size, unsigned int style) {
                 windows.emplace(std::make_pair(counter, new Graphics::Window(counter, title, size, WindowStyle(style))));
                 counter++;
                 running = true;
                 return *(windows[counter - 1]);
             }

             void GraphicsSystem::removeWindow(WindowId const& id) {
                 windows.erase(id);
             }

        }
    }
