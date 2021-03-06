
    /**
     * @file NRE_GlewException.hpp
     * @brief Declaration of System's API's Object : GlewException
     * @author Louis ABEL
     * @date 19/08/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include "NRE_SystemException.hpp"

    /**
     * @namespace NRE
     * @brief The NearlyRealEngine's global namespace
     */
    namespace NRE {
        /**
         * @namespace Exception
         * @brief Core's API
         */
        namespace Exception {

            /**
             * @class GlewException
             * @brief An exception thrown by glew operation
             */
            class GlewException : public SystemException {
                public:
                    /**
                     * Construct the exception with a custom log
                     * @param log the exception's log
                     */
                    GlewException(Core::String const& log) throw() : SystemException("GLEW Exception : " + log) {
                    }
            };
        }
    }
