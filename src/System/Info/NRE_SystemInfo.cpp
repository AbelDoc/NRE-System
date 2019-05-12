
    /**
     * @file NRE_SystemInfo.tpp
     * @brief Implementation of System's API's Object : SystemInfo
     * @author Louis ABEL
     * @date 07/04/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_SystemInfo.hpp"

     namespace NRE {
         namespace System {

             std::string SystemInfo::toString() const {
                 std::string res("Architecture : ");
                 res += architecture;
                 res += "\nCPU Model : ";
                 res += std::to_string(nbProcessors);
                 res += "x ";
                 res += cpuName;
                 res += "\nMemory : ";
                 res += std::to_string(memoryUsed);
                 res += " / ";
                 res += std::to_string(memorySize);
                 res += " Mo\nMemory Used by this Process : ";
                 res += std::to_string(memoryUsedByProcess);
                 res += " Mo";
                 return res;
             }

            std::ostream& operator <<(std::ostream& stream, SystemInfo const& o) {
                return stream << o.toString();
            }

         }
     }
