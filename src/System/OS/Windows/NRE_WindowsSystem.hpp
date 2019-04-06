
    /**
     * @file System/OS/Windows/NRE_WindowsSystem.hpp
     * @brief Declaration of System's API's Object : WindowsSystem
     * @author Louis ABEL
     * @date 06/04/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include <string>
    #include <cstring>
    #include <iostream>
    #include <intrin.h>
    #include <Windows.h>
    #include <Psapi.h>

    #include "../NRE_AbstractSystem.hpp"

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
             * @class WindowsSystem
             * @brief Represent the Windows System abstraction layer
             */
            class WindowsSystem : public AbstractSystem {
                public :    // Methods
                    //## Constructor ##//
                        /**
                         * Construct the system class and fill it with system information
                         */
                        WindowsSystem() {
                            queryCPUName();
                            querySystemInfo();
                            queryMemoryInfo();
                        }

                    //## Getter ##//
                        /**
                         * @return the system's name
                         */
                        std::string getSystemName() const override {
                            return "Windows System";
                        }

                    //## Methods ##//
                        /**
                         * Query the System's Memory info
                         */
                        void queryMemoryInfo() override {
                            MEMORYSTATUSEX memInfo;
                            memInfo.dwLength = sizeof(memInfo);
                            GlobalMemoryStatusEx(&memInfo);
                            infos.setMemorySize(memInfo.ullTotalPhys / (1024 * 1024));
                            infos.setMemoryUsed((memInfo.ullTotalPhys - memInfo.ullAvailPhys) / (1024 * 1024));

                            PROCESS_MEMORY_COUNTERS_EX currentMemInfo;
                            GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&currentMemInfo, sizeof(currentMemInfo));
                            infos.setMemoryUsedByProcess(currentMemInfo.PrivateUsage / (1024 * 1024));
                        }
                        /**
                         * Query the System's Info
                         */
                        void querySystemInfo() override {
                           SYSTEM_INFO sysInfo;
                           GetSystemInfo(&sysInfo);
                           switch (sysInfo.wProcessorArchitecture) {
                               case (PROCESSOR_ARCHITECTURE_AMD64) : {
                                   infos.setArchitecture("x64");
                                   break;
                               }
                               case (PROCESSOR_ARCHITECTURE_ARM) : {
                                   infos.setArchitecture("ARM");
                                   break;
                               }
                               case (12) : {
                                   infos.setArchitecture("ARM 64");
                                   break;
                               }
                               case (PROCESSOR_ARCHITECTURE_IA64) : {
                                   infos.setArchitecture("Intel Itanium-based");
                                   break;
                               }
                               case (PROCESSOR_ARCHITECTURE_INTEL) : {
                                   infos.setArchitecture("x86");
                                   break;
                               }
                               default : {
                                   infos.setArchitecture("Unknown architecture");
                               }
                           }
                           infos.setNbProcessors(sysInfo.dwNumberOfProcessors);
                        }
                        /**
                         * Query the CPU's name
                         */
                        void queryCPUName() override {
                            int cpuInfo[4] = {-1};
                            unsigned int extendedIds, i = 0;
                            char cpuBrand[0x40];

                            __cpuid(cpuInfo, 0x80000000);

                            extendedIds = cpuInfo[0];
                            for (i = 0x80000000; i <= extendedIds; ++i) {
                                __cpuid(cpuInfo, i);
                                if  (i == 0x80000002) {
                                    std::memcpy(cpuBrand,      cpuInfo, sizeof(cpuInfo));
                                } else if  (i == 0x80000003) {
                                    std::memcpy(cpuBrand + 16, cpuInfo, sizeof(cpuInfo));
                                } else if  (i == 0x80000004) {
                                    std::memcpy(cpuBrand + 32, cpuInfo, sizeof(cpuInfo));
                                }
                            }
                            infos.setCPUName(cpuBrand);
                        }

                private :   // Methods
            };

            typedef WindowsSystem SystemType;
            static SystemType System;

            /**
             * Output stream operator for the object
             * @param  stream the stream to add the object's string representation
             * @param  o      the object to add in the stream
             * @return the    modified stream
             */
            std::ostream& operator <<(std::ostream& stream, WindowsSystem const& o) {
                return stream << o.toString();
            }
        }
    }
