
    /**
     * @file NRE_WindowsInternalWindow.cpp
     * @brief Implementation of Graphics's API's Object : InternalWindow
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "../../../../../System/Graphics/Window/Internal/NRE_InternalWindow.hpp"
    #include "../../../../../System/NRE_System.hpp"

    using namespace NRE::Math;
    using namespace NRE::System;
    using namespace NRE::Core;

     namespace NRE {
         namespace Graphics {

            InternalWindow::InternalWindow(Id i, String const& title, Point2D<unsigned int> const& position, Vector2D<unsigned int> const& size, WindowStyle const& style) : id(i), savedInFullscreen(false) {
                WNDCLASSEXA windowClass;
                windowClass.cbSize = sizeof(WNDCLASSEX);
                windowClass.style = CS_OWNDC;
                windowClass.lpfnWndProc = internalDispatcher;
                windowClass.cbClsExtra = 0;
                windowClass.cbWndExtra = 0;
                windowClass.hInstance = GetModuleHandle(NULL);
                windowClass.hIcon   = LoadIcon(NULL,   IDI_APPLICATION);
                windowClass.hCursor = LoadCursor(NULL, IDC_ARROW);
                windowClass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
                windowClass.lpszMenuName = NULL;
                windowClass.lpszClassName = "NRE_Window";
                windowClass.hIconSm = NULL;

                RegisterClassExA(&windowClass);

                internal = CreateWindowExA(WS_EX_APPWINDOW, "NRE_Window", title.getCData(), style.toNativeStyle(), position.getX(), position.getY(), size.getW(), size.getH(), NULL, NULL, NULL, &id);
                if (style & WindowStyle::FULLSCREEN) {
                    toggleFullscreen(true);
                }
                device = GetDC(internal);
                Singleton<GraphicsDriver>::get().registerWindow(internal, id);
            }

            void InternalWindow::toggleFullscreen(bool inFullscreen) {
                if (!savedInFullscreen) {
                    savedStyle   = GetWindowLongPtr(internal, GWL_STYLE);
                    savedExStyle = GetWindowLongPtr(internal, GWL_EXSTYLE);
                    GetWindowRect(internal, &savedRect);
                }

                savedInFullscreen = inFullscreen;
                if (inFullscreen) {
                    SetWindowLongPtr(internal, GWL_STYLE, savedStyle & ~(WS_CAPTION | WS_THICKFRAME));
                    SetWindowLongPtr(internal, GWL_EXSTYLE, savedExStyle);

                    MONITORINFO monitor;
                    monitor.cbSize = sizeof(monitor);
                    GetMonitorInfo(MonitorFromWindow(internal, MONITOR_DEFAULTTONEAREST), &monitor);
                    SetWindowPos(internal, NULL, monitor.rcMonitor.left, monitor.rcMonitor.top, monitor.rcMonitor.right, monitor.rcMonitor.bottom, SWP_NOZORDER | SWP_NOACTIVATE | SWP_FRAMECHANGED);
                } else {
                    SetWindowLongPtr(internal, GWL_STYLE, savedStyle);
                    SetWindowLongPtr(internal, GWL_EXSTYLE, savedExStyle);
                    SetWindowPos(internal, NULL, savedRect.left, savedRect.top, savedRect.right, savedRect.bottom, SWP_NOZORDER | SWP_NOACTIVATE | SWP_FRAMECHANGED);
                }
            }

            LRESULT CALLBACK InternalWindow::internalDispatcher(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
                Id* id;
	            if (msg == WM_NCCREATE) {
	                 id = reinterpret_cast <Id*> (((LPCREATESTRUCT)lParam)->lpCreateParams);
	                 SetWindowLongPtr(hwnd, GWLP_USERDATA, reinterpret_cast <LONG_PTR> (id));

	                 return DefWindowProc(hwnd, msg, wParam, lParam);
                } else {
	                 id = reinterpret_cast <Id*> (GetWindowLongPtr(hwnd, GWLP_USERDATA));

	                 if (id != nullptr) {
                         return Singleton<System::System>::get().getEventSystem().internalDispatcher(*id, hwnd, msg, wParam, lParam);
                     } else {
		                 return DefWindowProc(hwnd, msg, wParam, lParam);
                     }
                }
            }

            Point2D<unsigned int> InternalWindow::computeCenteredPosition(Vector2D<unsigned int> size) {
                RECT desktop;
                GetWindowRect(GetDesktopWindow(), &desktop);

                return Point2D<unsigned int>(desktop.right / 2 - size.getW() / 2, desktop.bottom / 2 - size.getH() / 2);
            }

        }
    }
