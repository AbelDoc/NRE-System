
    /**
     * @file NRE_SystemException.hpp
     * @brief Declaration of System's API's Object : SystemException
     * @author Louis ABEL
     * @date 19/08/2019
     * @copyright CC-BY-NC-SA
     */

    #pragma once

    #include <Header/NRE_Utility.hpp>

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
             * @class SystemException
             * @brief An exception thrown by system operation
             */
            class SystemException : public IException {
                public:
                    /**
                     * Construct the exception with a custom log
                     * @param log the exception's log
                     */
                    SystemException(Utility::String const& log) throw() : IException(log) {
                    }
            };
        }
    }
