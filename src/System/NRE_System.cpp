
    /**
     * @file NRE_System.tpp
     * @brief Implementation of System's API's Object : System
     * @author Louis ABEL
     * @date 07/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_System.hpp"

     namespace NRE {
         namespace System {

             System::System() {
                 queryCPUName();
                 querySystemInfo();
                 queryMemoryInfo();
             }

             #ifdef _WIN32                           // Windows
                 std::string System::getSystemName() const {
                     return "Windows System";
                 }

                 void System::queryMemoryInfo() {
                     MEMORYSTATUSEX memInfo;
                     memInfo.dwLength = sizeof(memInfo);
                     GlobalMemoryStatusEx(&memInfo);
                     infos.setMemorySize(memInfo.ullTotalPhys / (1024 * 1024));
                     infos.setMemoryUsed((memInfo.ullTotalPhys - memInfo.ullAvailPhys) / (1024 * 1024));

                     PROCESS_MEMORY_COUNTERS_EX currentMemInfo;
                     GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&currentMemInfo, sizeof(currentMemInfo));
                     infos.setMemoryUsedByProcess(currentMemInfo.WorkingSetSize / (1024 * 1024));
                 }

                 void System::querySystemInfo() {
                     if (sizeof(void*) == 8) {
                         infos.setArchitecture("x64");
                     } else {
                         infos.setArchitecture("x32");
                     }

                    SYSTEM_INFO sysInfo;
                    GetSystemInfo(&sysInfo);
                    infos.setNbProcessors(sysInfo.dwNumberOfProcessors);
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
             #elif __APPLE__                         // Apple
                 #if TARGET_IPHONE_SIMULATOR         // iOS Simulator
                      #error "Not Supported Yet"
                 #elif TARGET_OS_IPHONE              // iOS Device
                     #error "Not Supported Yet"
                 #elif TARGET_OS_MAC                 // Mac OS
                     #error "Not Supported Yet"
                 #else                               // Unknown
                     #error "Unknown Apple platform"
                 #endif
             #elif __linux__                         // Linux

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
             #elif __unix__                          // Unix
                 #error "Not Supported Yet"
             #elif defined(_POSIX_VERSION)           // Posix
                 #error "Not Supported Yet"
             #else
                 #error "Unknown compiler"
             #endif

             SystemInfo const& System::getSystemInfo() const {
                 return infos;
             }

             std::string System::toString() const {
                 std::string res(getSystemName());
                 res += " :\n";
                 res += infos.toString();
                 return res;
             }

             std::ostream& operator <<(std::ostream& stream, System const& o) {
                return stream << o.toString();
             }

         }
     }
