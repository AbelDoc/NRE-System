
    /**
     * @file NRE_WindowsEventSystem.cpp
     * @brief Implementation of System's API's Object : EventSystem
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include <Header/NRE_Math.hpp>

    #include "../../../System/NRE_System.hpp"
    #include "../../../System/Event/Event/NRE_Event.hpp"
    #include <Windows.h>
    #include <Windowsx.h>

    using namespace NRE::Graphics;
    using namespace NRE::Event;
    using namespace NRE::Math;
    using namespace NRE::Utility;

     namespace NRE {
         namespace System {

                 LRESULT EventSystem::internalDispatcher(Id id, HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
                     switch (msg) {
                         case (WM_CLOSE) : {
                             emit<WindowCloseEvent>(id);
                             Singleton<System>::get().getGraphicsSystem().closeWindow(id);
                             break;
                         }
                         case (WM_DESTROY) : {
                             break;
                         }
                         case (WM_KEYDOWN) :
                         case (WM_SYSKEYDOWN) : {
                             KeyCode code = inputManager.translateKey(wParam, lParam);
                             if (code != KeyCode::NONE) {
                                 if (code == KeyCode::F4 && GetKeyState(VK_MENU)) {
                                     emit<WindowCloseEvent>(id);
                                     Singleton<System>::get().getGraphicsSystem().closeWindow(id);
                                 } else {
                                     if (!inputManager.isKeyPressed(code)) {
                                         inputManager.processPressedKey(code);
                                     }
                                 }
                             }

                             break;
                         }
                         case (WM_KEYUP) :
                         case (WM_SYSKEYUP) : {
                             KeyCode code = inputManager.translateKey(wParam, lParam);
                             if (code != KeyCode::NONE) {
                                 inputManager.processReleasedKey(code);
                             }
                             break;
                         }
                         case (WM_LBUTTONDOWN) : {
                             inputManager.processPressedButton(ButtonEventData(ButtonCode::LEFT_BUTTON, Point2D<unsigned int>(GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam))));
                             break;
                         }
                         case (WM_MBUTTONDOWN) : {
                             inputManager.processPressedButton(ButtonEventData(ButtonCode::MIDDLE_BUTTON, Point2D<unsigned int>(GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam))));
                             break;
                         }
                         case (WM_RBUTTONDOWN) : {
                             inputManager.processPressedButton(ButtonEventData(ButtonCode::RIGHT_BUTTON, Point2D<unsigned int>(GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam))));
                             break;
                         }
                         case (WM_XBUTTONDOWN) : {
                             if (GET_XBUTTON_WPARAM(wParam) == XBUTTON1) {
                                 inputManager.processPressedButton(ButtonEventData(ButtonCode::X1_BUTTON, Point2D<unsigned int>(GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam))));
                             } else {
                                 inputManager.processPressedButton(ButtonEventData(ButtonCode::X2_BUTTON, Point2D<unsigned int>(GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam))));
                             }
                             break;
                         }
                         case (WM_MOUSEMOVE) : {
                             ButtonCode code = inputManager.translateButton(wParam);
                             Point2D<unsigned int> position(GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam));
                             if (code != ButtonCode::NO_BUTTON && inputManager.isButtonPressed(code)) {
                                 inputManager.updateButtonEventData(ButtonEventData(code, position));
                             }
                             emit<MotionEvent>(code, position);
                             break;
                         }
                         case (WM_LBUTTONUP) : {
                             inputManager.processReleasedButton(ButtonEventData(ButtonCode::LEFT_BUTTON, Point2D<unsigned int>(GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam))));
                             break;
                         }
                         case (WM_MBUTTONUP) : {
                             inputManager.processReleasedButton(ButtonEventData(ButtonCode::MIDDLE_BUTTON, Point2D<unsigned int>(GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam))));
                             break;
                         }
                         case (WM_RBUTTONUP) : {
                             inputManager.processReleasedButton(ButtonEventData(ButtonCode::RIGHT_BUTTON, Point2D<unsigned int>(GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam))));
                             break;
                         }
                         case (WM_XBUTTONUP) : {
                             if (GET_XBUTTON_WPARAM(wParam) == XBUTTON1) {
                                 inputManager.processReleasedButton(ButtonEventData(ButtonCode::X1_BUTTON, Point2D<unsigned int>(GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam))));
                             } else {
                                 inputManager.processReleasedButton(ButtonEventData(ButtonCode::X2_BUTTON, Point2D<unsigned int>(GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam))));
                             }
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
                     inputManager.update();
                 }
         }
     }
