
    /**
     * @file NRE_Context.hpp
     * @brief Declaration of Graphics's API's Object : Context
     * @author Louis ABEL
     * @date 06/07/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

     #include <Header/NRE_Math.hpp>
     #include "../NRE_GraphicsDriver.hpp"
     #include "../../Window/Internal/NRE_InternalWindow.hpp"
     #include "Attributes/NRE_ContextAttributes.hpp"

     /**
      * @namespace NRE
      * @brief The NearlyRealEngine's global namespace
      */
     namespace NRE {
         /**
          * @namespace Graphics
          * @brief Graphics' API
          */
         namespace Graphics {

             #ifdef _WIN32                           // Windows
                 typedef HGLRC NativeContextType;
             #elif __linux__                         // Linux
             #endif

             /**
              * @class Context
              * @brief Describe an OpenGL Context with a set of attributes
              */
             class Context {
                 private :  // Fields
                    NativeContextType internal;     /**< The internal context */
                    ContextAttributes attributes;   /**< The context attributes */
                    bool owned;                     /**< Tell if the context is owned */

                public :    // Methods
                    //## Constructor ##//
                        /**
                         * Construct the context using the target window and desired attributes
                         * @param window the window to create the context
                         * @param attr   the context attributes
                         */
                        Context(InternalWindow& window, ContextAttributes const& attr);

                    //## Copy Constructor ##//
                        /**
                         * Copy forbidden
                         * @param ctx the context to copy
                         */
                        Context(Context const& ctx) = delete;

                    //## Move Constructor ##//
                        /**
                         * Move forbidden
                         * @param ctx the context to move
                         */
                        Context(Context && ctx) = delete;

                    //## Deconstructor ##//
                        /**
                         * Context Deconstructor
                         */
                        ~Context();

                    //## Methods ##//
                        /**
                         * Release the context
                         */
                        void release();

                    //## Assignment Operator ##//
                        /**
                         * Copy forbidden
                         * @param ctx the object to copy into this
                         * @return    the reference of himself
                         */
                        Context& operator =(Context const& ctx) = delete;
                        /**
                         * Move forbidden
                         * @param ctx the object to move into this
                         * @return    the reference of himself
                         */
                        Context& operator =(Context && ctx) = delete;
             };
         }
     }
