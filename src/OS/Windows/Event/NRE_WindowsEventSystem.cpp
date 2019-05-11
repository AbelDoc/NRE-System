
    /**
     * @file NRE_WindowsSystem.hpp
     * @brief Implementation of System's API's Object : System
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "../../../System/NRE_System.hpp"
    #include <Windows.h>

    using namespace NRE::Graphics;

     namespace NRE {
         namespace System {

                 LRESULT EventSystem::internalDispatcher(WindowId id, HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
                     switch (msg) {
                         case (WM_CLOSE) : {
                             getGraphicsSystem().closeWindow(id);
                             break;
                         }
                         case (WM_DESTROY) : {
                             break;
                         }
                         default : {
                             return DefWindowProc(hwnd, msg, wParam, lParam );
                         }
                     }

                     return 0;
                 }

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
