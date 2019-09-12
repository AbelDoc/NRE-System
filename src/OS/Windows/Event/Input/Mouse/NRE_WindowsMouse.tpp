
    /**
     * @file NRE_WindowsMouse.tpp
     * @brief Implementation of Event's API's Object : Mouse
     * @author Louis ABEL
     * @date 06/09/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Event {

            inline void Mouse::setRelativeMode(bool mode) {
                toggleRawInputDevices(mode);
                relativeMode = mode;
            }

            inline void Mouse::toggleRawInputDevices(bool mode) {
                if ((mode && !registered) || (!mode && registered)) {
                    RAWINPUTDEVICE raw = {0x01, 0x02, 0, NULL};

                    if (!mode) {
                        raw.dwFlags |= RIDEV_REMOVE;
                    }

                    if (!static_cast <bool> (RegisterRawInputDevices(&raw, 1, sizeof(RAWINPUTDEVICE)))) {
                        if (mode) {
                            throw Exception::WinAPIException("Raw devices system not supported");
                        }
                    }

                    registered = mode;
                }
            }

        }
    }
