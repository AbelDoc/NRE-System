
    /**
     * @file NRE_System.hpp
     * @brief Declaration of System's API's Object : System
     * @author Louis ABEL
     * @date 07/05/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include <string>
    #include <cstring>
    #include <iostream>
    #include <fstream>

    #include "Info/NRE_SystemInfo.hpp"
    #include "CpuID/NRE_CpuID.hpp"
    #include "Graphics/NRE_GraphicsSystem.hpp"
    #include "Event/NRE_EventSystem.hpp"

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
                        std::string getSystemName() const;
                        /**
                         * @return the System info
                         */
                        SystemInfo const& getSystemInfo() const;
                        /**
                         * @return the graphics sub system
                         */
                        GraphicsSystem& getGraphicsSystem();
                        /**
                         * @return the events sub system
                         */
                        EventSystem& getEventSystem();

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
                        std::string toString() const;
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
            System& getSystem();
            /**
             * @return the system graphics sub system
             */
            GraphicsSystem& getGraphicsSystem();
            /**
             * @return the system events sub system
             */
            EventSystem& getEventSystem();
        }
    }
