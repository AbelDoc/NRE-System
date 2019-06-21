
    /**
     * @file NRE_System.tpp
     * @brief Implementation of System's API's Object : System
     * @author Louis ABEL
     * @date 07/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_System.hpp"

    using namespace NRE::Utility;

     namespace NRE {
         namespace System {

             System::System() {
                 queryCPUName();
                 querySystemInfo();
                 queryMemoryInfo();
             }

             String System::toString() const {
                 String res;
                 res << getSystemName();
                 res << " :\n";
                 res << infos.toString();
                 return res;
             }

             std::ostream& operator <<(std::ostream& stream, System const& o) {
                return stream << o.toString();
             }

         }
     }
