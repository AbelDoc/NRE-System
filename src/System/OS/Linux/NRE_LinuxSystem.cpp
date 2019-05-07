
    /**
     * @file System/OS/Linux/NRE_LinuxSystem.tpp
     * @brief Implementation of System's API's Object : LinuxSystem
     * @author Louis ABEL
     * @date 06/04/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_LinuxSystem.hpp"

     namespace NRE {
         namespace System {

             LinuxSystem::LinuxSystem() {
                 queryCPUName();
                 querySystemInfo();
                 queryMemoryInfo();
             }

             std::string LinuxSystem::getSystemName() const {
                 return "Linux System";
             }

             void LinuxSystem::queryMemoryInfo() {
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

             void LinuxSystem::querySystemInfo() {
                 if (sizeof(void*) == 8) {
                     infos.setArchitecture("x64");
                 } else {
                     infos.setArchitecture("x32");
                 }
                 
                 infos.setNbProcessors(sysconf(_SC_NPROCESSORS_ONLN));
             }

             void LinuxSystem::queryCPUName() {
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

             std::ostream& operator <<(std::ostream& stream, LinuxSystem const& o) {
                 return stream << o.toString();
             }
         }
     }
