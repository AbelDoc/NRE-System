
    /**
     * @file System/OS/Linux/NRE_LinuxSystem.tpp
     * @brief Implementation of System's API's Object : LinuxSystem
     * @author Louis ABEL
     * @date 06/04/2019
     * @copyright CC-BY-NC-SA
     */

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
             }

             void LinuxSystem::querySystemInfo() {
             }

             void LinuxSystem::queryCPUName() {
             }

             std::ostream& operator <<(std::ostream& stream, LinuxSystem const& o) {
                 return stream << o.toString();
             }


         }
     }
