
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
            }

            GraphicsDriver::~GraphicsDriver() {
                XCloseDisplay(display);
            }

            Display* GraphicsDriver::getDisplay() {
                return display;
            }

            GraphicsDriver& GraphicsDriver::getDriver() {
                static GraphicsDriver instance;
                return instance;
            }

        }
    }
