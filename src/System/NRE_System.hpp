
    /**
     * @file NRE_System.hpp
     * @brief Declaration of System's API's Object : System
     * @author Louis ABEL
     * @date 07/05/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include <cstring>
    #include <iostream>
    #include <fstream>

    #include "Info/NRE_SystemInfo.hpp"
    #include "CpuID/NRE_CpuID.hpp"
    #include "Graphics/NRE_GraphicsSystem.hpp"
    #include "Event/NRE_EventSystem.hpp"
    #include "Time/Clock/NRE_Clock.hpp"

    #include <Utility/String/NRE_String.hpp>

    /**
     * @namespace NRE
     * @brief The NearlyRealEngine's global namespace
     */
    namespace NRE {
        /**
         * @namespace System
         * @brief System's API
         */
        namespace System {

            /**
             * @class System
             * @brief Represent the System abstraction layer
             */
            class System {
                protected :   // Fields
                    SystemInfo infos;           /**< The system's info */
                    GraphicsSystem graphics;    /**< The graphics sub system */
                    EventSystem events;         /**< The events sub system */
                    Time::Clock clock;                /**< The system clock */

                public :    // Methods
                    //## Constructor ##//
                        /**
                         * Construct the system class;
                         */
                        System();

                    //## Copy Constructor ##//
                        /**
                         * Copy forbidden
                         * @param sys the system to copy
                         */
                        System(System const& sys) = delete;

                    //## Move Constructor ##//
                        /**
                         * Move forbidden
                         * @param sys the system to copy
                         */
                        System(System && sys) = delete;

                    //## Deconstructor ##//
                        /**
                         * System Deconstructor
                         */
                        ~System() = default;

                    //## Getter ##//
                        /**
                         * @return the system's name
                         */
                        Utility::String getSystemName() const;
                        /**
                         * @return the System info
                         */
                        inline SystemInfo const& getSystemInfo() const {
                            return infos;
                        }
                        /**
                         * @return the graphics sub system
                         */
                        inline GraphicsSystem& getGraphicsSystem() {
                            return graphics;
                        }
                        /**
                         * @return the events sub system
                         */
                        inline EventSystem& getEventSystem() {
                            return events;
                        }
                        inline Time::Clock& getClock() {
                            return clock;
                        }

                    //## Methods ##//
                        /**
                         * Query the System's Memory info
                         */
                        void queryMemoryInfo();
                        /**
                         * Query the System's Info
                         */
                        void querySystemInfo();
                        /**
                         * Query the CPU's name
                         */
                        void queryCPUName();

                    //## Assignment Operator ##//
                        /**
                         * Copy forbidden
                         * @param s the object to copy into this
                         * @return  the reference of himself
                         */
                        System& operator =(System const& s) = delete;
                        /**
                         * Move forbidden
                         * @param s the object to move into this
                         * @return  the reference of himself
                         */
                        System& operator =(System && s) = delete;

                    //## Stream Operator ##//
                        /**
                         * Convert the system into a string
                         * @return the converted system
                         */
                        Utility::String toString() const;
            };

            /**
             * Output stream operator for the object
             * @param  stream the stream to add the object's string representation
             * @param  o      the object to add in the stream
             * @return the    modified stream
             */
            std::ostream& operator <<(std::ostream& stream, System const& o);

            /**
             * @return the system instance
             */
            inline System& getSystem() {
                static System instance;
                return instance;
            }
            /**
             * @return the system graphics sub system
             */
            inline GraphicsSystem& getGraphicsSystem() {
                return getSystem().getGraphicsSystem();
            }
            /**
             * @return the system events sub system
             */
            inline EventSystem& getEventSystem() {
                return getSystem().getEventSystem();
            }
            inline Time::Clock& getClock() {
                return getSystem().getClock();
            }
        }
    }
