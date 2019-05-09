
    /**
     * @file NRE_EventSystem.cpp
     * @brief Implementation of System's API's Object : EventSystem
     * @author Louis ABEL
     * @date 09/05/2019
     * @copyright CC-BY-NC-SA
     */

     #include "NRE_EventSystem.hpp"
     #include "../../Header/NRE_System.hpp"

      namespace NRE {
          namespace System {

              LRESULT EventSystem::internalDispatcher(WindowId id, HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
                  switch (msg) {
                      case (WM_CLOSE) : {
                          getGraphicsSystem().closeWindow(id);
                          break;
                      }
                      default : {
                          return DefWindowProc(hwnd, msg, wParam, lParam );
                      }
                  }

                  return 0;
              }

          }
      }
