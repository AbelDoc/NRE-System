
    /**
     * @file System/OS/Linux/NRE_WindowsSystem.tpp
     * @brief Implementation of System's API's Object : WindowsSystem
     * @author Louis ABEL
     * @date 06/04/2019
     * @copyright CC-BY-NC-SA
     */

     namespace NRE {
         namespace System {

             WindowsSystem::WindowsSystem() {
                 queryCPUName();
                 querySystemInfo();
                 queryMemoryInfo();
             }

             std::string WindowsSystem::getSystemName() const {
                 return "Windows System";
             }

             void WindowsSystem::queryMemoryInfo() {
                 MEMORYSTATUSEX memInfo;
                 memInfo.dwLength = sizeof(memInfo);
                 GlobalMemoryStatusEx(&memInfo);
                 infos.setMemorySize(memInfo.ullTotalPhys / (1024 * 1024));
                 infos.setMemoryUsed((memInfo.ullTotalPhys - memInfo.ullAvailPhys) / (1024 * 1024));

                 PROCESS_MEMORY_COUNTERS_EX currentMemInfo;
                 GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&currentMemInfo, sizeof(currentMemInfo));
                 infos.setMemoryUsedByProcess(currentMemInfo.PrivateUsage / (1024 * 1024));
             }

             void WindowsSystem::querySystemInfo() {
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

             void WindowsSystem::queryCPUName() {
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

             std::ostream& operator <<(std::ostream& stream, WindowsSystem const& o) {
                 return stream << o.toString();
             }


         }
     }
