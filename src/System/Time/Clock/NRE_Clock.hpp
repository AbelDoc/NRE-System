
    /**
     * @file NRE_Clock.hpp
     * @brief Declaration of Time's API's Object : Clock
     * @author Louis ABEL
     * @date 14/05/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

    #include <iostream>
    #include <thread>
    #include <chrono>

    #include <Utility/String/NRE_String.hpp>

     /**
     * @namespace NRE
     * @brief The NearlyRealEngine's global namespace
     */
    namespace NRE {
        /**
         * @namespace Time
         * @brief Time's API
         */
        namespace Time {

            /** Shortcut to hide Chrono type */
            typedef std::chrono::steady_clock Chrono;
            /** Shortcut to hide TimePoint type */
            typedef std::chrono::time_point<Chrono> TimePoint;
            /** Shortcut to hide TimeStep type */
            typedef std::chrono::duration<float, std::milli> TimeStep;

            /**
             * @class Clock
             * @brief Manage timing and program pause
             */
            class Clock {
                private:    //Fields
                    TimePoint now;      /**< The clock's actual time */
                    TimePoint before;   /**< The clock's last time */
                    TimePoint frame;    /**< The clock's last second's frame time */
                    TimeStep timestep;  /**< Timestep between actual and last time */
                    int nbFrames;       /**< Frames counter for fps calculation */
                    bool show;          /**< Tell if the clock display Fps or not */

                public:    // Methods
                    //## Constructor ##//
                        /**
                         * Default constructor
                         */
                        Clock();

                    //## Copy-Constructor ##//
                        /**
                         * Copy c into this
                         * @param c the clock to copy
                         */
                        Clock(Clock const& c) = default;

                    //## Move-Constructor ##//
                        /**
                         * Move c into this
                         * @param c the clock to move
                         */
                        Clock(Clock && c) = default;

                    //## Deconstructor ##//
                        /**
                         * Clock Deconstructor
                         */
                        ~Clock() = default;

                    //## Getter ##//
                        /**
                         * @return the clock's timestep
                         */
                        TimeStep const& getTimestep() const;
                        /**
                         * @return the timestep with float format
                         */
                        float getDelta() const;

                    //## Methods ##//
                        /**
                         * Update the clock
                         */
                        void update();
                        /**
                         * Update the clock and sleep if the timestep is lesser than the given limit
                         * @param time the minimum timestep
                         */
                        void updateAndSleep(TimeStep const& time);
                        /**
                         * Sleep for a given time
                         * @param time the timestep to sleep
                         */
                        void sleep(TimeStep const& time);
                        /**
                         * Enable fps display
                         */
                        void showFPS();
                        /**
                         * Disable fps display
                         */
                        void hideFPS();

                    //## Assignment Operator ##//
                        /**
                         * Copy assignment of c into this
                         * @param c the clock to copy into this
                         * @return      the reference of himself
                         */
                        Clock& operator =(Clock const& c) = default;
                        /**
                         * Move assignment of c into this, leaving c empty
                         * @param c the clock to move into this
                         * @return      the reference of himself
                         */
                        Clock& operator =(Clock && c) = default;

                    //## Stream Operator ##//
                        /**
                         * Convert the clock into a string
                         * @return the converted clock
                         */
                        Utility::String toString() const;

                private:   // Methods
                    /**
                     * Update the clock's actual time
                     */
                    void updateNow();
                    /**
                     * Update the clock's last time
                     */
                    void updateBefore();
                    /**
                     * Update the clock's timestep
                     */
                    void updateTimestep();
                    /**
                     * Update the clock's last frame time
                     */
                    void updateFrame();

                public:     // Static
                    static float TIMESTEP;  /**< The application's delta */
            };

            /**
             * Output stream operator for the object
             * @param  stream the stream to add the object's string representation
             * @param  o      the object to add in the stream
             * @return the    modified stream
             */
            std::ostream& operator <<(std::ostream& stream, Clock const& o);
        }
    }

    #include "NRE_Clock.tpp"
