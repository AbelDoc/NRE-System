
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

             SystemInfo const& System::getSystemInfo() const {
                 return infos;
             }

             GraphicsSystem& System::getGraphicsSystem() {
                 return graphics;
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

             System& getSystem()  {
                 static System systemInstance;
                 return systemInstance;
             }

         }
     }
