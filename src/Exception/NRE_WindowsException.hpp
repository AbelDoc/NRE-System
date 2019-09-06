
    /**
     * @file NRE_WindowsException.hpp
     * @brief Declaration of System's API's Object : WindowsException
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
         * @brief Utility's API
         */
        namespace Exception {

            /**
             * @class WindowsException
             * @brief An exception thrown by windows os operation
             */
            class WindowsException : public SystemException {
                public:
                    /**
                     * Construct the exception with a custom log
                     * @param log the exception's log
                     */
                    WindowsException(Utility::String const& log) throw() : SystemException("Windows Exception : " + log) {
                    }
            };
        }
    }
