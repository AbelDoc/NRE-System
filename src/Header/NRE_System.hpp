
    /**
     * @file Header/NRE_System.hpp
     * @brief Declaration of System's API's Header
     * @author Louis ABEL
     * @date 06/04/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #ifdef _WIN32                           // Windows

        #include "../System/OS/Windows/NRE_WindowsSystem.hpp"

        #ifdef _WIN64                        // Windows 64
        #else                                // Windows 32
        #endif
    #elif __APPLE__                         // Apple
        #include "TargetConditionals.h"
        #if TARGET_IPHONE_SIMULATOR         // iOS Simulator
             #error "Not Supported Yet"
        #elif TARGET_OS_IPHONE              // iOS Device
            #error "Not Supported Yet"
        #elif TARGET_OS_MAC                 // Mac OS
            #error "Not Supported Yet"
        #else                               // Unknown
            #error "Unknown Apple platform"
        #endif
    #elif __linux__                         // Linux
        #error "Not Supported Yet"
    #elif __unix__                          // Unix
        #error "Not Supported Yet"
    #elif defined(_POSIX_VERSION)           // Posix
        #error "Not Supported Yet"
    #else
        #error "Unknown compiler"
    #endif
