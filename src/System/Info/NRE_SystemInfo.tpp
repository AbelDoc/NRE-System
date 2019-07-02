
    /**
     * @file NRE_SystemInfo.tpp
     * @brief Implementation of System's API's Object : SystemInfo
     * @author Louis ABEL
     * @date 02/07/2019
     * @copyright CC-BY-NC-SA
     */

     namespace NRE {
         namespace System {

            inline SystemInfo::SystemInfo() : nbProcessors(0), memorySize(0), memoryUsed(0), memoryUsedByProcess(0) {
            }

            inline Utility::String const& SystemInfo::getCPUName() const {
                return cpuName;
            }

            inline Utility::String const& SystemInfo::getArchitecture() const {
                return architecture;
            }

            inline std::size_t SystemInfo::getNbProcessors() const {
                return nbProcessors;
            }

            inline std::size_t SystemInfo::getMemorySize() const {
                return memorySize;
            }

            inline std::size_t SystemInfo::getMemoryUsed() const {
                return memoryUsed;
            }

            inline std::size_t SystemInfo::getMemoryUsedByProcess() const {
                return memoryUsedByProcess;
            }

            inline void SystemInfo::setCPUName(Utility::String const& name) {
                cpuName = name;
            }

            inline void SystemInfo::setArchitecture(Utility::String const& arc) {
                architecture = arc;
            }

            inline void SystemInfo::setNbProcessors(std::size_t nb) {
                nbProcessors = nb;
            }

            inline void SystemInfo::setMemorySize(std::size_t size) {
                memorySize = size;
            }

            inline void SystemInfo::setMemoryUsed(std::size_t used) {
                memoryUsed = used;
            }

            inline void SystemInfo::setMemoryUsedByProcess(std::size_t used) {
                memoryUsedByProcess = used;
            }
         }
     }
