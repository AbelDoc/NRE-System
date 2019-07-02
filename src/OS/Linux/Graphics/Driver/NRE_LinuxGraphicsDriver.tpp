
    /**
     * @file NRE_LinuxGraphicsDriver.tpp
     * @brief Implementation of Graphics's API's Object : GraphicsDriver
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Graphics {

             inline GraphicsDriver::GraphicsDriver() : display(XOpenDisplay(NULL)) {
                 if (display == nullptr) {
                     std::cerr << "Can't connect to display server" << std::endl;
                     std::exit(-1);
                 }
                 closeAtom = XInternAtom(display, "WM_DELETE_WINDOW", false);
             }

             inline GraphicsDriver::~GraphicsDriver() {
                 XCloseDisplay(display);
             }

             inline Display* GraphicsDriver::getDisplay() {
                 return display;
             }

             inline Atom& GraphicsDriver::getCloseAtom() {
                 return closeAtom;
             }

        }
    }
