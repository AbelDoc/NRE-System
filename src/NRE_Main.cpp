
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

    using namespace NRE::System;

    int main(int, char**) {
        std::cout << getSystem() << std::endl;

        return 0;
    }
