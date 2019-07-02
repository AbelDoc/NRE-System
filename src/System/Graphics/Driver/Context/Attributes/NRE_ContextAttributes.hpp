
    /**
     * @file NRE_ContextAttributes.hpp
     * @brief Declaration of Graphics's API's Object : ContextAttributes
     * @author Louis ABEL
     * @date 02/07/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

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
            enum class GLAttributes {
                RED_SIZE,               /**< The minimum number of bits for the red channel */
                GREEN_SIZE,             /**< The minimum number of bits for the green channel */
                BLUE_SIZE,              /**< The minimum number of bits for the blue channel */
                ALPHA_SIZE,             /**< The minimum number of bits for the alpha channel */
                BUFFER_SIZE,            /**< The minimum number of bits for the frame buffer size */
                DOUBLEBUFFER,           /**< Tell if the frame buffer is single or double buffered */
                DEPTH_SIZE,             /**< The minimum number of bits for the depth buffer size */
                STENCIL_SIZE,           /**< The minimum number of bits for the stencil buffer size */
                ACCUM_RED_SIZE,         /**< The minimum number of bits for the red channel of accumulation */
                ACCUM_GREEN_SIZE,       /**< The minimum number of bits for the green channel of accumulation */
                ACCUM_BLUE_SIZE,        /**< The minimum number of bits for the blue channel of accumulation */
                ACCUM_ALPHA_SIZE,       /**< The minimum number of bits for the alpha channel of accumulation */
                STEREO,                 /**< Tell if the output is Stereo 3D */
                MULTISAMPLE_BUFFERS,    /**< The number of buffer used for multisamples anti-aliasing */
                MULTISAMPLE_SAMPLES,    /**< The number of samples for each buffer used in multisamples anti-aliasing */
                ACCELERATED_VISUAL,     /**< Tell if we use hardware accelerated */
                MAJOR_VERSION,          /**< The major version of OpenGL */
                MINOR_VERSION           /**< The minor version of OpenGL */
            };

            /**
             * @class ContextAttributes
             * @brief Regroup all attributes needed in a GL context, should be modified before creation
             */
            class ContextAttributes {
                private :   // Fields
                    int redSize;            /**< The number of bits in the red channel */
                    int greenSize;          /**< The number of bits in the green channel */
                    int blueSize;           /**< The number of bits in the blue channel */
                    int alphaSize;          /**< The number of bits in the alpha channel */
                    int bufferSize;         /**< The number of bits in a color buffer */
                    bool doubleBuffer;      /**< Tell if the frame buffer is single or double buffered */
                    int depthSize;          /**< The number of bits in the depth buffer */
                    int stencilSize;        /**< The number of bits in the stencil buffer */
                    int accumRedSize;       /**< The number of bits in the red accumulation buffer */
                    int accumGreenSize;     /**< The number of bits in the green accumulation buffer */
                    int accumBlueSize;      /**< The number of bits in the blue accumulation buffer */
                    int accumAlphaSize;     /**< The number of bits in the alpha accumulation buffer */
                    bool stereo;            /**< Tell if the output is Stereo 3D */
                    int msaaBuffers;        /**< The number of MSAA buffers */
                    int msaaSamples;        /**< Thenumber of MSAA samples */
                    bool acceleratedVisual; /**< Tell if the buffer is hardware accelerated */
                    int majorVersion;       /**< The OpenGL major version */
                    int minorVersion;       /**< The OpenGL minor version */

                public :    // Methods
                    //## Constructor ##//
                        /**
                         * Create a default context attributes
                         */
                        ContextAttributes();

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
                        ContextAttributes(ContextAttributes && attr);

                    //## Deconstructor ##//
                        /**
                         * ContextAttributes Deconstructor
                         */
                        ~ContextAttributes() = default;




            };

         }
     }
