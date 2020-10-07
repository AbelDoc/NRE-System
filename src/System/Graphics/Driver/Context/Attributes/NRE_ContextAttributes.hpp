
    /**
     * @file NRE_ContextAttributes.hpp
     * @brief Declaration of Graphics's API's Object : ContextAttributes
     * @author Louis ABEL
     * @date 02/07/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

     #include <Core/Array/NRE_Array.hpp>

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

            /**
             * @enum GLAttributes
             * @brief Regroup all attributes that the user can modiy before create a GL context
             */
            enum class GLAttributes : int {
                RED_SIZE,               /**< The minimum number of bits for the red channel */
                GREEN_SIZE,             /**< The minimum number of bits for the green channel */
                BLUE_SIZE,              /**< The minimum number of bits for the blue channel */
                ALPHA_SIZE,             /**< The minimum number of bits for the alpha channel */
                BUFFER_SIZE,            /**< The minimum number of bits for the frame buffer size */
                DOUBLEBUFFER,           /**< Tell if the frame buffer is single or double buffered */
                DEPTH_SIZE,             /**< The minimum number of bits for the depth buffer size */
                STENCIL_SIZE,           /**< The minimum number of bits for the stencil buffer size */
                STEREO,                 /**< Tell if the output is Stereo 3D */
                MULTISAMPLE_BUFFERS,    /**< The number of buffer used for multisamples anti-aliasing */
                MULTISAMPLE_SAMPLES,    /**< The number of samples for each buffer used in multisamples anti-aliasing */
                ACCELERATED_VISUAL,     /**< Tell if we use hardware accelerated */
                MAJOR_VERSION,          /**< The major version of OpenGL */
                MINOR_VERSION,          /**< The minor version of OpenGL */

                NUM_ATTRIBUTES          /*< The number of attributes */
            };

            /**
             * @class ContextAttributes
             * @brief Regroup all attributes needed in a GL context, should be modified before creation
             */
            class ContextAttributes {
                private :   // Fields
                    Core::Array<int, static_cast <std::size_t> (GLAttributes::NUM_ATTRIBUTES)> attributes;   /**< The context attributes */

                public :    // Methods
                    //## Constructor ##//
                        /**
                         * Create a default context attributes
                         */
                        ContextAttributes();
                        /**
                         * Create a context attributes from an attributes list
                         * @param list the attributes list
                         */
                        ContextAttributes(std::initializer_list<int> list);

                    //## Copy Constructor ##//
                        /**
                         * Copy attr into this
                         * @param attr the context attributes to copy
                         */
                        ContextAttributes(ContextAttributes const& attr) = default;

                    //## Move Constructor ##//
                        /**
                         * Move attr into this
                         * @param attr the context attributes to move
                         */
                        ContextAttributes(ContextAttributes && attr) = default;

                    //## Deconstructor ##//
                        /**
                         * ContextAttributes Deconstructor
                         */
                        ~ContextAttributes() = default;

                    //## Access Operator ##//
                        /**
                         * Access a particular attribute without bound checking
                         * @param  index the attribute index
                         * @return       the corresponding attribute
                         */
                        int& operator[](GLAttributes index);
                        /**
                         * Access a particular attribute without bound checking
                         * @param  index the attribute index
                         * @return       the corresponding attribute
                         */
                        int const& operator[](GLAttributes index) const;

                    //## Assignment Operator ##//
                        /**
                         * Copy assignment of attr into this
                         * @param attr the context attributes to copy into this
                         * @return     the reference of himself
                         */
                        ContextAttributes& operator =(ContextAttributes const& attr) = default;
                        /**
                         * Move assignment of attr into this, leaving o empty
                         * @param attr the context attributes to move into this
                         * @return     the reference of himself
                         */
                        ContextAttributes& operator =(ContextAttributes && attr) = default;

            };

         }
     }

     #include "NRE_ContextAttributes.tpp"
