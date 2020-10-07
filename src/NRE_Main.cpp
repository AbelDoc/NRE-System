
    /**
     * @file NRE_Main.cpp
     * @brief Test of System's API
     * @author Louis ABEL
     * @date 06/04/2019
     * @copyright CC-BY-NC-SA
     */

    #include "Header/NRE_System.hpp"

    using namespace NRE;
    using namespace NRE::System;
    using namespace NRE::Math;
    using namespace NRE::Event;
    using namespace NRE::Time;
    using namespace NRE::Graphics;
    using namespace NRE::Core;
    using namespace std::chrono_literals;

    class DevApplication : public Application {
        private :   // Fields
            bool relative;
            bool show;

        public :    // Methods
            //## Constructor ##//
                DevApplication() : Application("NRE-System Devlopment", {1280, 720}, WindowStyle::RESIZEABLE, {8, 8, 8, 0, 0, 1, 24, 8, 0, 0, 0, 1, 2, 1}), relative(false), show(true) {
                }

            //## Methods ##//
                void create() override {
                    addHandler<KeyEvent>([&](KeyEvent& event) {
                        std::cout << "Key event :" << std::endl;
                        std::cout << "\tCode : " << event.getCode() << std::endl;
                        if (event.isCode(Event::KeyCode::R)) {
                            relative = !relative;
                            Singleton<System::System>::get().setRelativeMode(relative);
                        }
                        if (event.isCode(Event::KeyCode::S)) {
                            show = !show;
                            Singleton<System::System>::get().showCursor(show);
                        }
                        return true;
                    });

                    addHandler<WindowCloseEvent>([&](WindowCloseEvent& event) {
                        std::cout << "One window is closing : " << event.getWindow().getId() << std::endl;
                        return true;
                    });

                    addHandler<ButtonEvent>([&](ButtonEvent& event) {
                        std::cout << "Button event : " << std::endl;
                        std::cout << "\tCode : " << event.getCode() << std::endl;
                        std::cout << "\tCursor : " << event.getPosition() << std::endl;
                        return false;
                    });

                    addHandler<MotionEvent>([&](MotionEvent& event) {
                        std::cout << "Motion event : " << std::endl;
                        std::cout << "\tCode : " << event.getCode() << std::endl;
                        std::cout << "\tPosition : " << event.getPosition() << std::endl;
                        std::cout << "\tMotion : " << event.getMotion() << std::endl;
                        return true;
                    });

                    addHandler<WheelMotionEvent>([&](WheelMotionEvent& event) {
                        std::cout << "Wheel Motion event : " << std::endl;
                        std::cout << "\tPosition : " << event.getPosition() << std::endl;
                        std::cout << "\tDelta : " << event.getDelta() << std::endl;
                        return true;
                    });
                }
                void update() override {
                }
                void render() override {
                    glClear(GL_COLOR_BUFFER_BIT);
                }
                void destroy() override {

                }
    };

    int main(int, char**) {
        DevApplication app;
        app.NREmain();

        std::cout << Singleton<NRE::System::System>::get() << std::endl;

        return 0;
    }
