
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
    using namespace NRE::Utility;

     namespace NRE {
         namespace Graphics {

             Window::Window(Id const& i, String const& t, Point2D<unsigned int> const& pos, Vector2D<unsigned int> const& s, WindowStyle const& ws, ContextAttributes const& attr) : window(i, t, pos, s, ws), attributes(t, pos, s), style(ws), id(i), context(window, attr) {
                 if (ws & WindowStyle::FULLSCREEN) {
                     status.setFullscreen(true);
                 }
             }

             Window::Window(Id const& i, String const& t, Vector2D<unsigned int> const& s, WindowStyle const& ws, ContextAttributes const& attr) : window(i, t, s, ws), attributes(t, s), style(ws), id(i), context(window, attr) {
                 if (ws & WindowStyle::FULLSCREEN) {
                     status.setFullscreen(true);
                 }
                 attributes.setPosition(window.getPosition());
             }

             Window::~Window() {
                 if (!status.isClosed()) {
                     close();
                 }
             }

             void Window::close(bool removeFromSystem) {
                 window.close();
                 context.release();
                 status.setClosed(true);
                 if (removeFromSystem) {
                     Singleton<System::System>::get().getGraphicsSystem().removeWindow(id);
                 }
             }

             String Window::toString() const {
                 return attributes.toString();
             }

             std::ostream& operator <<(std::ostream& stream, Window const& o) {
                return stream << o.toString();
             }

        }
    }
