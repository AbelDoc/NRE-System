
    /**
     * @file NRE_Main.cpp
     * @brief Test of System's API
     * @author Louis ABEL
     * @date 06/04/2019
     * @copyright CC-BY-NC-SA
     */

    #include "Header/NRE_System.hpp"

    using namespace NRE::System;
    using namespace NRE::Math;
    using namespace NRE::Event;
    using namespace NRE::Graphics;
    using namespace std::chrono_literals;

    int main(int, char**) {
        getGraphicsSystem().createWindow("NRE-System Devlopment", {1280, 720}, WindowStyle::RESIZEABLE);

        EventHandler<KeyEvent> handler([&](KeyEvent const& event) {
            std::cout << event.getCode() << std::endl;
        });

        getClock().update();
        getClock().showFPS();
        while (getGraphicsSystem().isRunning()) {
            getClock().updateAndSleep(16ms);
            getEventSystem().update();
        }

        return 0;
    }
