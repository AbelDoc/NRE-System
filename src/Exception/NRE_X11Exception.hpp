
    /**
     * @file NRE_X11Exception.hpp
     * @brief Declaration of System's API's Object : X11Exception
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
             * @class X11Exception
             * @brief An exception thrown by windows os operation
             */
            class X11Exception : public SystemException {
                public:
                    /**
                     * Construct the exception with a custom log
                     * @param log the exception's log
                     */
                    X11Exception(Utility::String const& log) throw() : SystemException("X11 Exception : " + log) {
                    }
            };
        }
    }
