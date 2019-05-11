
    /**
     * @file NRE_LinuxSystem.hpp
     * @brief Implementation of System's API's Object : System
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "../../../System/NRE_System.hpp"

    using namespace NRE::Graphics;

     namespace NRE {
         namespace System {

                 void EventSystem::internalDispatcher(XEvent const& event) {
                     switch (event.type) {
                        case ClientMessage : {
            				if ((event.xclient.format == 32) && (event.xclient.data.l[0] ) == static_cast <long> (GraphicsDriver::getDriver().getCloseAtom())) {
                                WindowId id = GraphicsDriver::getDriver().findId(event.xany.window);
                                if (id != 0) {
                                    getGraphicsSystem().closeWindow(id);
                                }
            				}
            				break;
                        }
                     }
                 }

                 bool EventSystem::hasNextEvent() {
                     Display* display = GraphicsDriver::getDriver().getDisplay();
                     XFlush(display);
                     if (XEventsQueued(display, QueuedAlready)) {
                         return true;
                     } else {
                         return false;
                     }
                 }

                 void EventSystem::update() {
                     while (hasNextEvent()) {
                         XEvent event;
                         XNextEvent(GraphicsDriver::getDriver().getDisplay(), &event);
                         internalDispatcher(event);
                     }
                 }

         }
     }
