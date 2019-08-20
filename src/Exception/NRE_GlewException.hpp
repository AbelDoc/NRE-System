
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
         * @brief Utility's API
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
                    GlewException(Utility::String const& log) throw() : SystemException("GLEW Exception : " + log) {
                    }

                    /**
                     * Output stream operator for the object
                     * @param  stream the stream to add the object's string representation
                     * @param  o      the object to add in the stream
                     * @return        the modified stream
                     */
                    friend std::ostream& operator <<(std::ostream& stream, GlewException const& o) {
                        return stream << o.toString();
                    }
            };
        }
    }
