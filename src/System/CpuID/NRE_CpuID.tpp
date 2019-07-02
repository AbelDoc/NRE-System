
    /**
     * @file NRE_CpuID.tpp
     * @brief Implementation of System's API's Object : CpuID
     * @author Louis ABEL
     * @date 02/07/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace System {

            inline Register const& CpuID::getRegister(unsigned int index) const {
                return registers[index];
            }

            inline const Register* CpuID::getRegisters() const {
                return registers;
            }

            inline std::size_t CpuID::getRegistersSize() const {
                return sizeof(registers);
            }

            inline Register const& CpuID::getEax() const {
                return registers[0];
            }

            inline Register const& CpuID::getEbx() const {
                return registers[1];
            }

            inline Register const& CpuID::getEcx() const {
                return registers[2];
            }

            inline Register const& CpuID::getEdx() const {
                return registers[3];
            }

            inline Register const& CpuID::operator [](unsigned int index) const {
                return registers[index];
            }

        }
    }
