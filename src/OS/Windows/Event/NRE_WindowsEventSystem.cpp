
    /**
     * @file NRE_WindowsSystem.hpp
     * @brief Implementation of System's API's Object : System
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "../../../System/Event/NRE_EventSystem.hpp"
    #include <Windows.h>

     namespace NRE {
         namespace System {

                 void EventSystem::update() {
                     DWORD current = GetTickCount();
                     MSG msg;
                     bool timeout = false;
                     while (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE) && !timeout) {
                         TranslateMessage(&msg);
                         DispatchMessage(&msg);

                         if (msg.time > current) {
                             timeout = true;
                         }
                     }
                 }

         }
     }
