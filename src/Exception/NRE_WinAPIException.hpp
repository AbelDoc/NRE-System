
    /**
     * @file NRE_WinAPIException.hpp
     * @brief Declaration of System's API's Object : WinAPIException
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
             * @class WinAPIException
             * @brief An exception thrown by windows os operation
             */
            class WinAPIException : public SystemException {
                public:
                    /**
                     * Construct the exception with a custom log
                     * @param log the exception's log
                     */
                    WinAPIException(Core::String const& log) throw() : SystemException("WinAPI Exception : " + log) {
                    }
            };
        }
    }
