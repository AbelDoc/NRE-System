
    /**
     * @file NRE_LinuxMouse.tpp
     * @brief Implementation of Event's API's Object : Mouse
     * @author Louis ABEL
     * @date 06/09/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Event {

            inline void Mouse::setRelativeMode(bool mode) {
                relativeMode = mode;
            }
    
            inline void Mouse::warpCursor(Graphics::InternalWindow const& window, Math::Point2D<unsigned int> const& pos) {
                Display* display = Core::Singleton<Graphics::GraphicsDriver>::get().getDisplay();
                XWarpPointer(display, None, window.getInternal(), 0, 0, 0, 0, pos.getX(), pos.getY());
                XSync(display, False);
            }
    
            inline void Mouse::showCursor(bool) {
                // TODO
            }

        }
    }
