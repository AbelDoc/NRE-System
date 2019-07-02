
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

    #include <Utility/String/NRE_String.hpp>

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
                        Register const& getRegister(unsigned int index) const;
                        /**
                         * @return all registers
                         */
                        const Register* getRegisters() const;
                        /**
                         * @return registers size
                         */
                        std::size_t getRegistersSize() const;
                        /**
                         * @return the eax register, equivalent to getRegister(0)
                         */
                        Register const& getEax() const;
                        /**
                         * @return the ebx register, equivalent to getRegister(1)
                         */
                        Register const& getEbx() const;
                        /**
                         * @return the ecx register, equivalent to getRegister(2)
                         */
                        Register const& getEcx() const;
                        /**
                         * @return the edx register, equivalent to getRegister(3)
                         */
                        Register const& getEdx() const;

                    //## Access Operator ##//
                        /**
                         * Return a const-reference on the index's register, don't check the index range
                         * @param index the point's object index
                         * @return      a const-reference on the index's register
                         */
                        Register const& operator [](unsigned int index) const;

                    //## Stream Operator ##//
                        /**
                         * Convert the registers into a string
                         * @return the converted registers
                         */
                        Utility::String toString() const;
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

    #include "NRE_CpuID.tpp"
