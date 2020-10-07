
    /**
     * @file System/NRE_System.hpp
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

    #include <Core/String/NRE_String.hpp>
    #include <Core/Singleton/NRE_Singleton.hpp>

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
            class System : public Core::Singleton<System> {
                friend Core::Singleton<System>;
                private :   // Fields
                    SystemInfo infos;           /**< The system's info */
                    GraphicsSystem graphics;    /**< The graphics sub system */
                    EventSystem events;         /**< The events sub system */
                    Time::Clock clock;          /**< The system clock */

                public :    // Methods
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
                        Core::String getSystemName() const;
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
                        /**
                         * @return the system clock
                         */
                        Time::Clock& getClock();

                    //## Setter ##//
                        /**
                         * Set the relative input mode
                         * @param mode the new mode, true for relative
                         */
                        void setRelativeMode(bool mode);
                        /**
                         * Show or hide the cursor
                         * @param mode the new mode, true to show it
                         */
                        void showCursor(bool mode);

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
                        Core::String toString() const;

                private :   // Methods
                    //## Constructor ##//
                        /**
                         * Construct the system class;
                         */
                        System();
            };

            /**
             * Output stream operator for the object
             * @param  stream the stream to add the object's string representation
             * @param  o      the object to add in the stream
             * @return the    modified stream
             */
            std::ostream& operator <<(std::ostream& stream, System const& o);
        }
    }

    #include "NRE_System.tpp"
