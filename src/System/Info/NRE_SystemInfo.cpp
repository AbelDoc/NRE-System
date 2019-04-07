
    /**
     * @file NRE_SystemInfo.tpp
     * @brief Implementation of System's API's Object : SystemInfo
     * @author Louis ABEL
     * @date 07/04/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_SystemInfo.hpp"

     namespace NRE {
         namespace System {

             SystemInfo::SystemInfo() : cpuName(""), architecture(""), nbProcessors(0), memorySize(0), memoryUsed(0), memoryUsedByProcess(0) {
             }

             std::string const& SystemInfo::getCPUName() const {
                 return cpuName;
             }

             std::string const& SystemInfo::getArchitecture() const {
                 return architecture;
             }

             std::size_t SystemInfo::getNbProcessors() const {
                 return nbProcessors;
             }

             std::size_t SystemInfo::getMemorySize() const {
                 return memorySize;
             }

             std::size_t SystemInfo::getMemoryUsed() const {
                 return memoryUsed;
             }

             std::size_t SystemInfo::getMemoryUsedByProcess() const {
                 return memoryUsedByProcess;
             }

             void SystemInfo::setCPUName(std::string const& name) {
                 cpuName = name;
             }

             void SystemInfo::setArchitecture(std::string const& arc) {
                 architecture = arc;
             }

             void SystemInfo::setNbProcessors(std::size_t nb) {
                 nbProcessors = nb;
             }

             void SystemInfo::setMemorySize(std::size_t size) {
                 memorySize = size;
             }

             void SystemInfo::setMemoryUsed(std::size_t used) {
                 memoryUsed = used;
             }

             void SystemInfo::setMemoryUsedByProcess(std::size_t used) {
                 memoryUsedByProcess = used;
             }

             std::string SystemInfo::toString() const {
                 std::string res("Architecture : ");
                 res += architecture;
                 res += "\nCPU Model : ";
                 res += std::to_string(nbProcessors);
                 res += "x ";
                 res += cpuName;
                 res += "\nMemory : ";
                 res += std::to_string(memoryUsed);
                 res += " / ";
                 res += std::to_string(memorySize);
                 res += " Mo\nMemory Used by this Process : ";
                 res += std::to_string(memoryUsedByProcess);
                 res += " Mo";
                 return res;
             }

            std::ostream& operator <<(std::ostream& stream, SystemInfo const& o) {
                return stream << o.toString();
            }

         }
     }
