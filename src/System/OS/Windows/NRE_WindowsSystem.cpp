
    /**
     * @file System/OS/Linux/NRE_WindowsSystem.tpp
     * @brief Implementation of System's API's Object : WindowsSystem
     * @author Louis ABEL
     * @date 06/04/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_WindowsSystem.hpp"

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
                 infos.setMemoryUsedByProcess(currentMemInfo.WorkingSetSize / (1024 * 1024));
             }

             void WindowsSystem::querySystemInfo() {
                 if (sizeof(void*) == 8) {
                     infos.setArchitecture("x64");
                 } else {
                     infos.setArchitecture("x32");
                 }

                SYSTEM_INFO sysInfo;
                GetSystemInfo(&sysInfo);
                infos.setNbProcessors(sysInfo.dwNumberOfProcessors);
             }

             void WindowsSystem::queryCPUName() {
                 char cpuBrand[0x40];
                 CpuID check(0x80000000);

                 for (unsigned int i = 0x80000000; i <= check.getEax(); ++i) {
                     CpuID call(i);
                     if  (i == 0x80000002) {
                         std::memcpy(cpuBrand,      call.getRegisters(), call.getRegistersSize());
                     } else if  (i == 0x80000003) {
                         std::memcpy(cpuBrand + 16, call.getRegisters(), call.getRegistersSize());
                     } else if  (i == 0x80000004) {
                         std::memcpy(cpuBrand + 32, call.getRegisters(), call.getRegistersSize());
                     }
                 }
                 infos.setCPUName(cpuBrand);
             }

             std::ostream& operator <<(std::ostream& stream, WindowsSystem const& o) {
                 return stream << o.toString();
             }
         }
     }
