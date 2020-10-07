
    /**
     * @file NRE_CpuID.cpp
     * @brief Implementation of System's API's Object : CpuID
     * @author Louis ABEL
     * @date 07/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_CpuID.hpp"

    using namespace NRE::Core;

     namespace NRE {
        namespace System {

            CpuID::CpuID(unsigned int i) {
                #ifdef _WIN32
                    __cpuid((int *)registers, (int)i);
                #else
                    asm volatile ("cpuid" : "=a" (registers[0]), "=b" (registers[1]), "=c" (registers[2]), "=d" (registers[3]) : "a" (i), "c" (0));
                #endif
            }

            String CpuID::toString() const {
                String res;
                res << (const char *)&registers[0];
                res << (const char *)&registers[1];
                res << (const char *)&registers[2];
                res << (const char *)&registers[3];
                return res;
            }

           std::ostream& operator <<(std::ostream& stream, CpuID const& o) {
               return stream << o.toString();
           }
        }
    }
