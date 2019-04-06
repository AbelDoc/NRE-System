
    /**
     * @file System/OS/Linux/NRE_LinuxSystem.hpp
     * @brief Declaration of System's API's Object : LinuxSystem
     * @author Louis ABEL
     * @date 06/04/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include <string>
    #include <iostream>
    #include <fstream>

    #include "../NRE_AbstractSystem.hpp"

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
             * @class LinuxSystem
             * @brief Represent the Linux System abstraction layer
             */
            class LinuxSystem : public AbstractSystem {
                public :    // Methods
                    //## Constructor ##//
                        /**
                         * Construct the system class and fill it with system information
                         */
                        LinuxSystem() {
                            queryCPUName();
                            querySystemInfo();
                            queryMemoryInfo();
                        }

                    //## Getter ##//
                        /**
                         * @return the system's name
                         */
                        std::string getSystemName() const override {
                            return "Linux System";
                        }

                    //## Methods ##//
                        /**
                         * Query the System's Memory info
                         */
                        void queryMemoryInfo() override {
                        }
                        /**
                         * Query the System's Info
                         */
                        void querySystemInfo() override {
                        }
                        /**
                         * Query the CPU's name
                         */
                        void queryCPUName() override {
                        }

                private :   // Methods
            };

            typedef LinuxSystem SystemType;
            static SystemType System;

            /**
             * Output stream operator for the object
             * @param  stream the stream to add the object's string representation
             * @param  o      the object to add in the stream
             * @return the    modified stream
             */
            std::ostream& operator <<(std::ostream& stream, LinuxSystem const& o) {
                return stream << o.toString();
            }
        }
    }
