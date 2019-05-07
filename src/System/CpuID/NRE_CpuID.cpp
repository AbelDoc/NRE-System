
    /**
     * @file NRE_CpuID.cpp
     * @brief Implementation of System's API's Object : CpuID
     * @author Louis ABEL
     * @date 07/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_CpuID.hpp"

     namespace NRE {
        namespace System {

            CpuID::CpuID(unsigned int i) {
                #ifdef _WIN32
                    __cpuid((int *)registers, (int)i);
                #else
                    asm volatile ("cpuid" : "=a" (registers[0]), "=b" (registers[1]), "=c" (registers[2]), "=d" (registers[3]) : "a" (i), "c" (0));
                #endif
            }

            Register const& CpuID::getRegister(unsigned int index) const {
                return registers[index];
            }

            const Register* CpuID::getRegisters() const {
                return registers;
            }

            std::size_t CpuID::getRegistersSize() const {
                return sizeof(registers);
            }

            Register const& CpuID::getEax() const {
                return registers[0];
            }

            Register const& CpuID::getEbx() const {
                return registers[1];
            }

            Register const& CpuID::getEcx() const {
                return registers[2];
            }

            Register const& CpuID::getEdx() const {
                return registers[3];
            }

            Register const& CpuID::operator[](unsigned int index) const {
                return registers[index];
            }

            std::string CpuID::toString() const {
                std::string res((const char *)&registers[0]);
                res += (const char *)&registers[1];
                res += (const char *)&registers[2];
                res += (const char *)&registers[3];
                return res;
            }

           std::ostream& operator <<(std::ostream& stream, CpuID const& o) {
               return stream << o.toString();
           }
        }
    }
