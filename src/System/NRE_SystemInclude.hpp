
    /**
     * @file NRE_SystemInclude.gpp
     * @brief Declaration of System's Includes
     * @author Louis ABEL
     * @date 07/05/2019
     * @copyright CC-BY-NC-SA
     */

     #ifdef _WIN32                           // Windows
         #include <Windows.h>
         #include <Psapi.h>
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
         #include <unistd.h>
         #include <sys/types.h>
         #include <sys/sysinfo.h>
     #elif __unix__                          // Unix
         #error "Not Supported Yet"
     #elif defined(_POSIX_VERSION)           // Posix
         #error "Not Supported Yet"
     #else
         #error "Unknown compiler"
     #endif
