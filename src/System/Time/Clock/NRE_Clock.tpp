
    /**
     * @file NRE_Clock.cpp
     * @brief Implementation of Time's API's Object : Clock
     * @author Louis ABEL
     * @date 02/07/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Time {

            inline Clock::Clock() : now(Chrono::now()), before(now), frame(now), timestep(now - before), nbFrames(0), show(false) {
            }

            inline TimeStep const& Clock::getTimestep() const {
                return timestep;
            }

            inline float Clock::getDelta() const {
                return std::chrono::duration<float>(timestep).count();
            }

            inline void Clock::update() {
                updateBefore();
                updateNow();
                updateTimestep();
                updateFrame();
            }

            inline void Clock::updateAndSleep(TimeStep const& time) {
                update();
                if (getTimestep() < time) {
                    sleep(time - getTimestep());
                    updateNow();
                    updateTimestep();
                }
            }

            inline void Clock::sleep(TimeStep const& time) {
                std::this_thread::sleep_for(time);
            }

            inline void Clock::showFPS() {
                show = true;
            }

            inline void Clock::hideFPS() {
                show = false;
            }

            inline void Clock::updateNow() {
                now = Chrono::now();
            }

            inline void Clock::updateBefore() {
                before = now;
            }

            inline void Clock::updateTimestep() {
                timestep = now - before;
                TIMESTEP = getDelta();
            }
        }
    }
