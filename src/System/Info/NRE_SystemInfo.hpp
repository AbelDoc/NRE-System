
    /**
     * @file NRE_SystemInfo.hpp
     * @brief Declaration of System's API's Object : SystemInfo
     * @author Louis ABEL
     * @date 06/04/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include <string>
    #include <iostream>

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
                    std::string cpuName;                /**< The CPU's name */
                    std::string architecture;           /**< The System Architecture */
                    std::size_t nbProcessors;           /**< The number of CPU */
                    std::size_t memorySize;             /**< The RAM size */
                    std::size_t memoryUsed;             /**< The RAM totally used */
                    std::size_t memoryUsedByProcess;    /**< The RAM totally used by the currrent process */

                public :    // Methods
                    //## Constructor ##//
                        /**
                         * Construct an empty system information set
                         */
                        SystemInfo();

                    //## Getter ##//
                        /**
                         * @return the CPU's name
                         */
                        std::string const& getCPUName() const;
                        /**
                         * @return the System Architecture
                         */
                        std::string const& getArchitecture() const;
                        /**
                         * @return the number of CPU
                         */
                        std::size_t getNbProcessors() const;
                        /**
                         * @return the memory size
                         */
                        std::size_t getMemorySize() const;
                        /**
                         * @return the memory used
                         */
                        std::size_t getMemoryUsed() const;
                        /**
                         * @return the memory used by the current process
                         */
                        std::size_t getMemoryUsedByProcess() const;

                    //## Setter ##//
                        /**
                         * CPU Name Setter
                         * @param name the new cpu's name
                         */
                        void setCPUName(std::string const& name);
                        /**
                         * Architecture Setter
                         * @param arc the new architecture value
                         */
                        void setArchitecture(std::string const& arc);
                        /**
                         * NbProcessors Setter
                         * @param nb the new number of processors
                         */
                        void setNbProcessors(std::size_t nb);
                        /**
                         * Memory Size Setter
                         * @param size the new memory size
                         */
                        void setMemorySize(std::size_t size);
                        /**
                         * Memory Used Setter
                         * @param used the new memory used
                         */
                        void setMemoryUsed(std::size_t used);
                        /**
                         * Memory Used By Process Setter
                         * @param used the new memory used by process
                         */
                        void setMemoryUsedByProcess(std::size_t used);

                    //## Stream Operator ##//
                        /**
                         * Convert the system info into a string
                         * @return the converted system info
                         */
                        std::string toString() const;

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

    #include "NRE_SystemInfo.tpp"
