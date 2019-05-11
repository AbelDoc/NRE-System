
    /**
     * @file NRE_Window.cpp
     * @brief Implementation of Graphics's API's Object : Window
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_Window.hpp"
    #include "../../../Header/NRE_System.hpp"

    using namespace NRE::Math;
    using namespace NRE::System;

     namespace NRE {
         namespace Graphics {

             Window::Window(WindowId const& i, std::string const& t, Point2D<unsigned int> const& pos, Vector2D<unsigned int> const& s, WindowStyle const& ws) : window(i, t, pos, s, ws), attributes(t, pos, s), style(ws), id(i) {
                 if (ws.getStyle() & WindowStyle::FULLSCREEN) {
                     status.setFullscreen(true);
                 }
             }

             Window::Window(WindowId const& i, std::string const& t, Vector2D<unsigned int> const& s, WindowStyle const& ws) : window(i, t, s, ws), attributes(t, s), style(ws), id(i) {
                 if (ws.getStyle() & WindowStyle::FULLSCREEN) {
                     status.setFullscreen(true);
                 }
                 attributes.setPosition(window.getPosition());
             }

             Window::~Window() {
                 if (!status.isClosed()) {
                     close();
                 }
             }

             bool Window::isRunning() const {
                 return !status.isClosed();
             }

             void Window::close(bool removeFromSystem) {
                 window.close();
                 status.setClosed(true);
                 if (removeFromSystem) {
                     getGraphicsSystem().removeWindow(id);
                 }
             }

             std::string Window::toString() const {
                 return attributes.toString();
             }

             std::ostream& operator <<(std::ostream& stream, Window const& o) {
                return stream << o.toString();
             }

        }
    }
