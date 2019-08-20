
    /**
     * @file NRE_WGLException.hpp
     * @brief Declaration of System's API's Object : WGLException
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
             * @class WGLException
             * @brief An exception thrown by wgl operation
             */
            class WGLException : public SystemException {
                public:
                    /**
                     * Construct the exception with a custom log
                     * @param log the exception's log
                     */
                    WGLException(Utility::String const& log) throw() : SystemException("WGL Exception : " + log) {
                    }
            };
        }
    }
