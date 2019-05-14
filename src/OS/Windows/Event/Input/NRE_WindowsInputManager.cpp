
    /**
     * @file NRE_WindowsInputManager.hpp
     * @brief Implementation of Event's API's Object : InputManager
     * @author Louis ABEL
     * @date 12/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "../../../../System/Event/Input/NRE_InputManager.hpp"

     namespace NRE {
         namespace Event {

                KeyCode InputManager::translateKey(WPARAM wParam, LPARAM lParam) const {
                    return keyTranslater.translateKey(wParam, lParam);
                }

         }
     }
