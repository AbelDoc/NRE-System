
    /**
     * @file NRE_SystemInfo.hpp
     * @brief Declaration of System's API's Object : SystemInfo
     * @author Louis ABEL
     * @date 06/04/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include <iostream>

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
             * @class SystemInfo
             * @brief Represent all informations from the user system
             */
            class SystemInfo {
                private :   // Fields
                    Utility::String cpuName;                     /**< The CPU's name */
                    Utility::String architecture;                /**< The System Architecture */
                    std::size_t nbProcessors;           /**< The number of CPU */
                    std::size_t memorySize;             /**< The RAM size */
                    std::size_t memoryUsed;             /**< The RAM totally used */
                    std::size_t memoryUsedByProcess;    /**< The RAM totally used by the currrent process */

                public :    // Methods
                    //## Constructor ##//
                        /**
                         * Construct an empty system information set
                         */
                        inline SystemInfo() : nbProcessors(0), memorySize(0), memoryUsed(0), memoryUsedByProcess(0) {
                        }

                    //## Getter ##//
                        /**
                         * @return the CPU's name
                         */
                        inline Utility::String const& getCPUName() const {
                            return cpuName;
                        }
                        /**
                         * @return the System Architecture
                         */
                        inline Utility::String const& getArchitecture() const {
                            return architecture;
                        }
                        /**
                         * @return the number of CPU
                         */
                        inline std::size_t getNbProcessors() const {
                            return nbProcessors;
                        }
                        /**
                         * @return the memory size
                         */
                        inline std::size_t getMemorySize() const {
                            return memorySize;
                        }
                        /**
                         * @return the memory used
                         */
                        inline std::size_t getMemoryUsed() const {
                            return memoryUsed;
                        }
                        /**
                         * @return the memory used by the current process
                         */
                        inline std::size_t getMemoryUsedByProcess() const {
                            return memoryUsedByProcess;
                        }

                    //## Setter ##//
                        /**
                         * CPU Name Setter
                         * @param name the new cpu's name
                         */
                        inline void setCPUName(Utility::String const& name) {
                            cpuName = name;
                        }
                        /**
                         * Architecture Setter
                         * @param arc the new architecture value
                         */
                        inline void setArchitecture(Utility::String const& arc) {
                            architecture = arc;
                        }
                        /**
                         * NbProcessors Setter
                         * @param nb the new number of processors
                         */
                        inline void setNbProcessors(std::size_t nb) {
                            nbProcessors = nb;
                        }
                        /**
                         * Memory Size Setter
                         * @param size the new memory size
                         */
                        inline void setMemorySize(std::size_t size) {
                            memorySize = size;
                        }
                        /**
                         * Memory Used Setter
                         * @param used the new memory used
                         */
                        inline void setMemoryUsed(std::size_t used) {
                            memoryUsed = used;
                        }
                        /**
                         * Memory Used By Process Setter
                         * @param used the new memory used by process
                         */
                        inline void setMemoryUsedByProcess(std::size_t used) {
                            memoryUsedByProcess = used;
                        }

                    //## Stream Operator ##//
                        /**
                         * Convert the system info into a string
                         * @return the converted system info
                         */
                        Utility::String toString() const;

            };

            /**
             * Output stream operator for the object
             * @param  stream the stream to add the object's string representation
             * @param  o      the object to add in the stream
             * @return the    modified stream
             */
            std::ostream& operator <<(std::ostream& stream, SystemInfo const& o);

        }
    }
