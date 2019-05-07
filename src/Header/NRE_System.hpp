
    /**
     * @file Header/NRE_System.hpp
     * @brief Declaration of System's API's Header
     * @author Louis ABEL
     * @date 06/04/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include "../System/NRE_System.hpp"

    namespace NRE {
        namespace System {

            /**
             * @return the system instance
             */
            System& getSystem() {
                static System systemInstance;
                return systemInstance;
            }
        }
    }
