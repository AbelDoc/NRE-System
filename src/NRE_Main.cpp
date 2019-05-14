
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

    int main(int, char**) {
        getGraphicsSystem().createWindow("NRE-System Devlopment", {1280, 720}, WindowStyle::RESIZEABLE);

        EventHandler<KeyEvent> handler([&](KeyEvent const& event) {
            std::cout << event.getCode() << std::endl;
        });

        while (getGraphicsSystem().isRunning()) {
            getEventSystem().update();
        }

        return 0;
    }
