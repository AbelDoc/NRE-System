
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
                                Graphics::Id id = Singleton<GraphicsDriver>::get().findId(event.xany.window);
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
                            ButtonCode code = inputManager.translateButton(event.xbutton);
                            if (code != ButtonCode::NO_BUTTON) {
                                inputManager.processPressedButton(ButtonEventData(code, Point2D<unsigned int>(event.xbutton.x, event.xbutton.y)));
                            }
                            break;
                        }
                        case ButtonRelease : {
                            if (event.xbutton.button == Button4 || event.xbutton.button == Button5) {
                                Point2D<unsigned int> position(event.xbutton.x, event.xbutton.y);
                                int delta = (event.xbutton.button == Button4) ? (1) : (-1);
                                emit<WheelMotionEvent>(position, delta);
                            } else {
                                ButtonCode code = inputManager.translateButton(event.xbutton);
                                if (code != ButtonCode::NO_BUTTON) {
                                    inputManager.processReleasedButton(ButtonEventData(code, Point2D<unsigned int>(event.xbutton.x, event.xbutton.y)));
                                }
                            }
                            break;
                        }
                        case MotionNotify : {
                            ButtonCode code = inputManager.translateButton(event.xbutton);
                            Point2D<unsigned int> position(event.xbutton.x, event.xbutton.y);
                            Mouse& mouse = inputManager.getMouse();
                            if (code != ButtonCode::NO_BUTTON && inputManager.isButtonPressed(code)) {
                                inputManager.updateButtonEventData(ButtonEventData(code, position));
                            }
                            Vector2D<int> motion(position); // TODO
                            if (mouse.isRelativeMode()) {
                                Graphics::Id id = Singleton<GraphicsDriver>::get().findId(event.xany.window);
                                auto const& win = Singleton<System>::get().getGraphicsSystem().getWindow(id);
                                mouse.warpCursor(win.getInternal(), win.getAttributes().getSize() / 2);
                            }
                            emit<MotionEvent>(code, position, motion);
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

                 void EventSystem::updateInfos() {
                     Display* display = Singleton<GraphicsDriver>::get().getDisplay();
                     int winX, winY, rootX, rootY;
                     unsigned int trashMask = 0;
                     NativeWindowType rootR, childR;
                     if (XQueryPointer(display, XRootWindow(display, XDefaultScreen(display)), &rootR, &childR, &rootX, &rootY, &winX, &winY, &trashMask)) {
                         inputManager.getMouse().setLastPosition(Point2D<unsigned int>(static_cast <unsigned int> (rootX), static_cast <unsigned int> (rootY)));
                     }

                     int trashEvent, trashErr;

                     if (!XQueryExtension(display, "XInputExtension", &rawInputCode, &trashEvent, &trashErr)) {
                         throw Exception::X11Exception("The server can't provide XInputExtension which is required");
                     }

                     int major = 2, minor = 2;
                     XIQueryVersion(display, &major, &minor);
                     if (major < 2) {
                         throw Exception::X11Exception(Utility::String("XInputExtension 2.+ is required. Found : ") << major << "." << minor);
                     }

                     XIEventMask eventMask;
                     unsigned char mask[3] = {0, 0, 0};
                     eventMask.deviceid = XIAllMasterDevices;
                     eventMask.mask_len = sizeof(mask);
                     eventMask.mask = mask;

                     XISetMask(mask, XI_RawMotion);
                     XISetMask(mask, XI_RawButtonPress);
                     XISetMask(mask, XI_RawButtonRelease);

                     if (XISelectEvents(display, DefaultRootWindow(display), &eventMask, 1) != Success) {
                         throw Exception::X11Exception("Couldn't use Raw input events");
                     }
                 }

         }
     }
