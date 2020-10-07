
    /**
     * @file NRE_SystemInfo.cpp
     * @brief Implementation of System's API's Object : SystemInfo
     * @author Louis ABEL
     * @date 07/04/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_SystemInfo.hpp"

    using namespace NRE::Core;

     namespace NRE {
         namespace System {

             String SystemInfo::toString() const {
                 String res;
                 res.reserve(130);
                 res << "Architecture : ";
                 res << architecture;
                 res << "\nCPU Model : ";
                 res << nbProcessors;
                 res << "x ";
                 res << cpuName;
                 res << "\nMemory : ";
                 res << memoryUsed;
                 res << " / ";
                 res << memorySize;
                 res << " Mo\nMemory Used by this Process : ";
                 res << memoryUsedByProcess;
                 res << " Mo";
                 return res;
             }

            std::ostream& operator <<(std::ostream& stream, SystemInfo const& o) {
                return stream << o.toString();
            }

         }
     }
