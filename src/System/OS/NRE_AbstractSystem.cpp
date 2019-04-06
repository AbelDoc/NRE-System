
    /**
     * @file NRE_AbstractSystem.hpp
     * @brief Implementation of System's API's Object : AbstractSystem
     * @author Louis ABEL
     * @date 06/04/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_AbstractSystem.hpp"

    namespace NRE {
        namespace System {

            std::string AbstractSystem::toString() const {
                std::string res(getSystemName());
                res += " :\n";
                res += infos.toString();
                return res;
            }

            std::ostream& operator <<(std::ostream& stream, AbstractSystem const& o) {
               return stream << o.toString();
            }


        }
    }
