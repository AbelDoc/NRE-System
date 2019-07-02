
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
                    Utility::String cpuName;            /**< The CPU's name */
                    Utility::String architecture;       /**< The System Architecture */
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
                        Utility::String const& getCPUName() const;
                        /**
                         * @return the System Architecture
                         */
                        Utility::String const& getArchitecture() const;
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
                         * Set the cpu name value
                         * @param name the new cpu's name
                         */
                        void setCPUName(Utility::String const& name);
                        /**
                         * Set the architecture value
                         * @param arc the new architecture value
                         */
                        void setArchitecture(Utility::String const& arc);
                        /**
                         * Set the number of processors
                         * @param nb the new number of processors
                         */
                        void setNbProcessors(std::size_t nb);
                        /**
                         * Set the memory size
                         * @param size the new memory size
                         */
                        void setMemorySize(std::size_t size);
                        /**
                         * Set the memory used size
                         * @param used the new memory used
                         */
                        void setMemoryUsed(std::size_t used);
                        /**
                         * Set the memory used by this process value
                         * @param used the new memory used by process
                         */
                        void setMemoryUsedByProcess(std::size_t used);

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

    #include "NRE_SystemInfo.tpp"
