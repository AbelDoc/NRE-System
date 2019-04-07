
    /**
     * @file NRE_AbstractSystem.hpp
     * @brief Declaration of System's API's Object : AbstractSystem
     * @author Louis ABEL
     * @date 06/04/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include <string>
    #include <cstring>
    #include <iostream>

    #include "../Info/NRE_SystemInfo.hpp"

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
             * @class AbstractSystem
             * @brief Represent the System abstraction layer
             */
            class AbstractSystem {
                protected :   // Fields
                    SystemInfo infos;   /**< The system's info */

                public :    // Methods
                    //## Constructor ##//
                        /**
                         * Construct the system class;
                         */
                        AbstractSystem() = default;

                    //## Copy Constructor ##//
                        /**
                         * Copy forbidden
                         * @param sys the system to copy
                         */
                        AbstractSystem(AbstractSystem const& sys) = delete;

                    //## Move Constructor ##//
                        /**
                         * Move forbidden
                         * @param sys the system to copy
                         */
                        AbstractSystem(AbstractSystem && sys) = delete;

                    //## Deconstructor ##//
                        /**
                         * AbstractSystem Deconstructor
                         */
                        virtual ~AbstractSystem() = default;

                    //## Getter ##//
                        /**
                         * @return the system's name
                         */
                        virtual std::string getSystemName() const = 0;
                        /**
                         * @return the System info
                         */
                        SystemInfo const& getSystemInfo() const;

                    //## Methods ##//
                        /**
                         * Query the System's Memory info
                         */
                        virtual void queryMemoryInfo() = 0;
                        /**
                         * Query the System's Info
                         */
                        virtual void querySystemInfo() = 0;
                        /**
                         * Query the CPU's name
                         */
                        virtual void queryCPUName() = 0;

                    //## Assignment Operator ##//
                        /**
                         * Copy forbidden
                         * @param s the object to copy into this
                         * @return  the reference of himself
                         */
                        AbstractSystem& operator =(AbstractSystem const& s) = delete;
                        /**
                         * Move forbidden
                         * @param s the object to move into this
                         * @return  the reference of himself
                         */
                        AbstractSystem& operator =(AbstractSystem && s) = delete;

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
            std::ostream& operator <<(std::ostream& stream, AbstractSystem const& o);
        }
    }
