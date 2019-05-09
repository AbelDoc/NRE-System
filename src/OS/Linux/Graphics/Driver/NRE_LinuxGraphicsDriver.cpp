
    /**
     * @file NRE_LinuxGraphicsDriver.cpp
     * @brief Implementation of System's API's Object : GraphicsDriver
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_LinuxGraphicsDriver.hpp"

     namespace NRE {
         namespace System {

            GraphicsDriver::GraphicsDriver() : display(XOpenDisplay(NULL)) {
                if (display == nullptr) {
                    std::cerr << "Can't connect to display server" << std::endl;
                    std::exit(-1);
                }
                closeAtom = XInternAtom(display, "WM_DELETE_WINDOW", false);
            }

            GraphicsDriver::~GraphicsDriver() {
                XCloseDisplay(display);
            }

            Display* GraphicsDriver::getDisplay() {
                return display;
            }

            Atom& GraphicsDriver::getCloseAtom() {
                return closeAtom;
            }

            void GraphicsDriver::registerWindow(Window window, WindowId id) {
                windows.emplace(std::make_pair(window, id));
            }

            WindowId GraphicsDriver::findId(Window window) const {
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
