
    /**
     * @file NRE_InputManager.tpp
     * @brief Implementation of Event's API's Object : InputManager
     * @author Louis ABEL
     * @date 14/05/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Event {

            inline bool InputManager::isKeyPressed(KeyCode code) const {
                return std::find(keys.begin(), keys.end(), code) != keys.end();
            }

            inline bool InputManager::isButtonPressed(ButtonCode code) const {
                return std::find(buttons.begin(), buttons.end(), ButtonEventData(code, Math::Point2D<unsigned int>())) != buttons.end();
            }

            inline bool InputManager::isRelativeMode() const {
                return mouse.isRelativeMode();
            }

            inline Mouse& InputManager::getMouse() {
                return mouse;
            }

            inline void InputManager::setRelativeMode(bool mode) {
                mouse.setRelativeMode(mode);
            }

            inline void InputManager::processPressedKey(KeyCode key) {
                keys.emplaceBack(key);
            }

            inline void InputManager::processPressedButton(ButtonEventData const& buttonData) {
                buttons.emplaceBack(buttonData);
            }

            inline void InputManager::processReleasedKey(KeyCode key) {
                auto it = std::remove(keys.begin(), keys.end(), key);
                if (it != keys.end()) {
                    keys.erase(it);
                }
            }

            inline void InputManager::processReleasedButton(ButtonEventData const& buttonData) {
                auto it = std::remove(buttons.begin(), buttons.end(), buttonData);
                if (it != buttons.end()) {
                    buttons.erase(it);
                }
            }

            inline void InputManager::updateButtonEventData(ButtonEventData const& buttonData) {
                std::replace(buttons.begin(), buttons.end(), buttonData, buttonData);
            }

        }
    }
