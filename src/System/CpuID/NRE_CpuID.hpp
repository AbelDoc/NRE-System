
    /**
     * @file NRE_CpuID.hpp
     * @brief Declaration of System's API's Object : CpuID
     * @author Louis ABEL
     * @date 07/54/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

     #ifdef _WIN32
        #include <limits.h>
        #include <intrin.h>
        typedef unsigned __int32 Register;
    #else
        #include <stdint.h>
        typedef uint32_t Register;
    #endif

    #include <string>

    /**
     * @namespace NRE
     * @brief The NearlyRealEngine's global namespace
     */
    namespace NRE {
        /**
         * @namespace System
         * @brief System's API
         */
        namespace System {

            /**
             * @class CpuID
             * @brief Allow access to the cpuid intrinsic command for all system
             */
            class CpuID {
                private :   // Fields
                    Register registers[4];  /**< The command registers */

                public :    // Methods
                    //## Constructor ##//
                        /**
                         * No default constructor;
                         */
                        CpuID() = delete;
                        /**
                         * Construct the command
                         * @param i the parameter to get from the command
                         */
                        CpuID(unsigned int i);

                    //## Getter ##//
                        /**
                         * Return a specific register
                         * @param  index the register index
                         * @return       the corresponding register
                         */
                        inline Register const& getRegister(unsigned int index) const {
                            return registers[index];
                        }
                        /**
                         * @return all registers
                         */
                        inline const Register* getRegisters() const {
                            return registers;
                        }
                        /**
                         * @return registers size
                         */
                        inline std::size_t getRegistersSize() const {
                            return sizeof(registers);
                        }
                        /**
                         * @return the eax register, equivalent to getRegister(0)
                         */
                        inline Register const& getEax() const {
                            return registers[0];
                        }
                        /**
                         * @return the ebx register, equivalent to getRegister(1)
                         */
                        inline Register const& getEbx() const {
                            return registers[1];
                        }
                        /**
                         * @return the ecx register, equivalent to getRegister(2)
                         */
                        inline Register const& getEcx() const {
                            return registers[2];
                        }
                        /**
                         * @return the edx register, equivalent to getRegister(3)
                         */
                        inline Register const& getEdx() const {
                            return registers[3];
                        }

                    //## Access Operator ##//
                        /**
                         * Return a const-reference on the index's register, don't check the index range
                         * @param index the point's object index
                         * @return      a const-reference on the index's register
                         */
                        Register const& operator [](unsigned int index) const {
                            return registers[index];
                        }

                    //## Stream Operator ##//
                        /**
                         * Convert the registers into a string
                         * @return the converted registers
                         */
                        std::string toString() const;
            };

            /**
             * Output stream operator for the object
             * @param  stream the stream to add the object's string representation
             * @param  o      the object to add in the stream
             * @return the    modified stream
             */
            std::ostream& operator <<(std::ostream& stream, CpuID const& o);
        }
    }
