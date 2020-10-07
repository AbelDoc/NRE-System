
    /**
     * @file NRE_Clock.cpp
     * @brief Implementation of Time's API's Object : Clock
     * @author Louis ABEL
     * @date 14/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_Clock.hpp"

    using namespace NRE::Core;

    namespace NRE {
        namespace Time {

            float Clock::TIMESTEP = 0;

            void Clock::updateFrame() {
                nbFrames++;
                TimeStep dt(now - frame);
                if (dt.count() >= 1000.0f) {
                    if (show) {
                        std::cout << "Fps : " << nbFrames << std::endl;
                    }
                    frame = now;
                    nbFrames = 0;
                }
            }

            String Clock::toString() const {
                String res;
                res << getTimestep().count();
                res << "ms";
                return res;
            }

            std::ostream& operator <<(std::ostream& stream, Clock const& o) {
               return stream << o.toString();
            }

        }
    }
