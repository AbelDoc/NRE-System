
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
         * @brief Utility's API
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
                    GLXException(Utility::String const& log) throw() : SystemException(("GLX Exception : " + log).getCData()) {
                    }

                    /**
                     * Output stream operator for the object
                     * @param  stream the stream to add the object's string representation
                     * @param  o      the object to add in the stream
                     * @return        the modified stream
                     */
                    friend std::ostream& operator <<(std::ostream& stream, GLXException const& o) {
                        return stream << o.toString();
                    }
            };
        }
    }
