
    /**
     * @file NRE_WGLException.hpp
     * @brief Declaration of System's API's Object : WGLException
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
             * @class WGLException
             * @brief An exception thrown by wgl operation
             */
            class WGLException : public IException {
                public:
                    /**
                     * Construct the exception with a custom log
                     * @param log the exception's log
                     */
                    WGLException(Utility::String const& log) throw() : IException(("WGL Exception : " + log).getCData()) {
                    }

                    /**
                     * Output stream operator for the object
                     * @param  stream the stream to add the object's string representation
                     * @param  o      the object to add in the stream
                     * @return        the modified stream
                     */
                    friend std::ostream& operator <<(std::ostream& stream, WGLException const& o) {
                        return stream << o.toString();
                    }
            };
        }
    }
