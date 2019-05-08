
    /**
     * @file NRE_Main.cpp
     * @brief Test of System's API
     * @author Louis ABEL
     * @date 06/04/2019
     * @copyright CC-BY-NC-SA
     */

    #include <string>
    #include <iostream>

    #include "Header/NRE_System.hpp"
    #include <Header/NRE_Math.hpp>
    #include "OS/Windows/Graphics/Window/Internal/NRE_WindowsInternalWindow.hpp"

    using namespace NRE::System;
    using namespace NRE::Math;

    int main(int, char**) {
        std::cout << getSystem() << std::endl;

        return 0;
    }
