
    /**
     * @file NRE_GLXException.hpp
     * @brief Declaration of System's API's Object : GLXException
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
             * @class GLXException
             * @brief An exception thrown by glx operation
             */
            class GLXException : public SystemException {
                public:
                    /**
                     * Construct the exception with a custom log
                     * @param log the exception's log
                     */
                    GLXException(Core::String const& log) throw() : SystemException("GLX Exception : " + log) {
                    }
            };
        }
    }
