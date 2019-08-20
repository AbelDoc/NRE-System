
    /**
     * @file NRE_LinuxEventSystem.cpp
     * @brief Implementation of System's API's Object : EventSystem
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "../../../System/NRE_System.hpp"
    #include "../../../System/Event/Event/NRE_Event.hpp"

    using namespace NRE::Graphics;
    using namespace NRE::Event;
    using namespace NRE::Math;
    using namespace NRE::Utility;

     namespace NRE {
         namespace System {

                 void EventSystem::internalDispatcher(XEvent const& event) {
                     switch (event.type) {
                        case ClientMessage : {
            				if ((event.xclient.format == 32) && (event.xclient.data.l[0] ) == static_cast <long> (Singleton<GraphicsDriver>::get().getCloseAtom())) {
                                Id id = Singleton<GraphicsDriver>::get().findId(event.xany.window);
                                if (id != 0) {
                                    emit<WindowCloseEvent>(id);
                                    Singleton<System>::get().getGraphicsSystem().closeWindow(id);
                                }
            				}
            				break;
                        }
                        case KeyPress : {
                            Event::KeyCode code = inputManager.translateKey(event.xkey);
                            if (code != Event::KeyCode::NONE && !inputManager.isKeyPressed(code)) {
                                inputManager.processPressedKey(code);
                            }
                            break;
                        }
                        case KeyRelease : {
                            Event::KeyCode code = inputManager.translateKey(event.xkey);
                            if (code != Event::KeyCode::NONE) {
                                inputManager.processReleasedKey(code);
                            }
                            break;
                        }
                        case ButtonPress : {
                            inputManager.processPressedButton(ButtonEventData(inputManager.translateButton(event.xbutton), Point2D<unsigned int>(event.xbutton.x, event.xbutton.y)));
                            break;
                        }
                        case ButtonRelease : {
                            inputManager.processReleasedButton(ButtonEventData(inputManager.translateButton(event.xbutton), Point2D<unsigned int>(event.xbutton.x, event.xbutton.y)));
                            break;
                        }
                        case MotionNotify : {
                            ButtonCode code = inputManager.translateButton(event.xbutton);
                            Point2D<unsigned int> position(event.xbutton.x, event.xbutton.y);
                            if (code != ButtonCode::NO_BUTTON && inputManager.isButtonPressed(code)) {
                                inputManager.updateButtonEventData(ButtonEventData(code, position));
                            }
                            emit<MotionEvent>(code, position);
                            break;
                        }
                     }
                 }

                 bool EventSystem::hasNextEvent() {
                     Display* display = Singleton<GraphicsDriver>::get().getDisplay();
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
                         XNextEvent(Singleton<GraphicsDriver>::get().getDisplay(), &event);
                         internalDispatcher(event);
                     }
                     inputManager.update();
                 }

         }
     }
