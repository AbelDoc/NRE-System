
    /**
     * @file NRE_Clock.cpp
     * @brief Implementation of Time's API's Object : Clock
     * @author Louis ABEL
     * @date 14/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_Clock.hpp"

    using namespace NRE::Utility;

    namespace NRE {
        namespace Time {

            float Clock::TIMESTEP = 0;

            Clock::Clock() : now(Chrono::now()), before(now), frame(now), timestep(now - before), nbFrames(0), show(false) {
            }

            TimeStep const& Clock::getTimestep() const {
                return timestep;
            }

            float Clock::getDelta() const {
                return std::chrono::duration<float>(timestep).count();
            }

            void Clock::update() {
                updateBefore();
                updateNow();
                updateTimestep();
                updateFrame();
            }

            void Clock::updateAndSleep(TimeStep const& time) {
                update();
                if (getTimestep() < time) {
                    sleep(time - getTimestep());
                    updateNow();
                    updateTimestep();
                }
            }

            void Clock::sleep(TimeStep const& time) {
                std::this_thread::sleep_for(time);
            }

            void Clock::showFPS() {
                show = true;
            }

            void Clock::hideFPS() {
                show = false;
            }

            void Clock::updateNow() {
                now = Chrono::now();
            }

            void Clock::updateBefore() {
                before = now;
            }

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

            void Clock::updateTimestep() {
                timestep = now - before;
                TIMESTEP = getDelta();
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
