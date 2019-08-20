
    /**
     * @file NRE_LinuxSystem.cpp
     * @brief Implementation of System's API's Object : System
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "../../System/NRE_System.hpp"
    #include <unistd.h>
    #include <sys/types.h>
    #include <sys/sysinfo.h>

    using namespace NRE::Utility;

     namespace NRE {
         namespace System {

                 String System::getSystemName() const {
                     return "Linux System";
                 }

                 void System::queryMemoryInfo() {
                     struct sysinfo memInfo;
                     sysinfo (&memInfo);

                     std::size_t totalPhysMem = memInfo.totalram / (1024 * 1024);
                     infos.setMemorySize(totalPhysMem * memInfo.mem_unit);

                     std::size_t physMemUsed  = (memInfo.totalram - memInfo.freeram)  / (1024 * 1024);
                     infos.setMemoryUsed(physMemUsed * memInfo.mem_unit);

                     int tSize = 0, resident = 0;

                     std::ifstream procFile("/proc/self/statm");
                     procFile >> tSize >> resident;
                     procFile.close();

                     long rss = resident * sysconf(_SC_PAGE_SIZE);
                     infos.setMemoryUsedByProcess(rss / (1024 * 1024));
                 }

                 void System::querySystemInfo() {
                     if (sizeof(void*) == 8) {
                         infos.setArchitecture("x64");
                     } else {
                         infos.setArchitecture("x32");
                     }

                     infos.setNbProcessors(sysconf(_SC_NPROCESSORS_ONLN));
                 }

                 void System::queryCPUName() {
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

         }
     }
