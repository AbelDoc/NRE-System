
    /**
     * @file NRE_WindowsContext.cpp
     * @brief Implementation of Graphics's API's Object : Context
     * @author Louis ABEL
     * @date 06/07/2019
     * @copyright CC-BY-NC-SA
     */

    #include "../../../../../System/Graphics/Driver/Context/NRE_Context.hpp"

    namespace NRE {
        namespace Graphics {

            Context::Context(InternalWindow& window, ContextAttributes const& attr) : attributes(attr) {
                DWORD flags = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL;
                if (attr[GLAttributes::DOUBLEBUFFER]) {
                    flags |= PFD_DOUBLEBUFFER;
                }

                int bufferSize = (attr[GLAttributes::BUFFER_SIZE]) ? (attr[GLAttributes::BUFFER_SIZE] - attr[GLAttributes::ALPHA_SIZE]) : (attr[GLAttributes::RED_SIZE] + attr[GLAttributes::GREEN_SIZE] + attr[GLAttributes::BLUE_SIZE]);

                PIXELFORMATDESCRIPTOR tmpFormat = {
                    sizeof(PIXELFORMATDESCRIPTOR), 1, flags,
                    PFD_TYPE_RGBA, static_cast <BYTE> (bufferSize),
                    static_cast <BYTE> (attr[GLAttributes::RED_SIZE]), 0,
                    static_cast <BYTE> (attr[GLAttributes::GREEN_SIZE]), 0,
                    static_cast <BYTE> (attr[GLAttributes::BLUE_SIZE]), 0,
                    static_cast <BYTE> (attr[GLAttributes::ALPHA_SIZE]), 0,
                    0, 0, 0, 0, 0,
                    static_cast <BYTE> (attr[GLAttributes::DEPTH_SIZE]),
                    static_cast <BYTE> (attr[GLAttributes::STENCIL_SIZE]),
                    0,
                    PFD_MAIN_PLANE,
                    0, 0, 0, 0
                };

                int tmpPixelFormat = ChoosePixelFormat(window.getDevice(), &tmpFormat);
                SetPixelFormat(window.getDevice(), tmpPixelFormat, &tmpFormat);

                NativeContextType tmpContext = wglCreateContext(window.getDevice());
                wglMakeCurrent(window.getDevice(), tmpContext);

                GLenum err = wglewInit();
                if (err != GLEW_OK) {
                    wglMakeCurrent(window.getDevice(), NULL);
                    wglDeleteContext(tmpContext);
                    throw std::invalid_argument("Wglew Init Failed.");
                }

                const int pixelAttributes[] {
                    WGL_DRAW_TO_WINDOW_ARB, GL_TRUE,
                    WGL_SUPPORT_OPENGL_ARB, GL_TRUE,
                    WGL_DOUBLE_BUFFER_ARB, (attr[GLAttributes::DOUBLEBUFFER]) ? (GL_TRUE) : (GL_FALSE),
                    WGL_PIXEL_TYPE_ARB, WGL_TYPE_RGBA_ARB,
                    WGL_COLOR_BITS_ARB, bufferSize,
                    WGL_DEPTH_BITS_ARB, attr[GLAttributes::DEPTH_SIZE],
                    WGL_STENCIL_BITS_ARB, attr[GLAttributes::STENCIL_SIZE],
                    WGL_SAMPLE_BUFFERS_ARB, (attr[GLAttributes::MULTISAMPLE_BUFFERS] > 1) ? (GL_TRUE) : (GL_FALSE),
                    WGL_SAMPLES_ARB, (attr[GLAttributes::MULTISAMPLE_BUFFERS] > 1) ? (attr[GLAttributes::MULTISAMPLE_SAMPLES]) : (0),
                    WGL_ACCELERATION_ARB, (attr[GLAttributes::ACCELERATED_VISUAL]) ? (WGL_FULL_ACCELERATION_ARB) : (WGL_NO_ACCELERATION_ARB),
                    WGL_STEREO_ARB, (attr[GLAttributes::STEREO]) ? (GL_TRUE) : (GL_FALSE),
                    0
                };

                int pixelFormat;
                unsigned int formatCount;
                wglChoosePixelFormatARB(window.getDevice(), pixelAttributes, NULL, 1, &pixelFormat, &formatCount);
                if (formatCount == 0) {
                    throw std::invalid_argument("Pixel Format Failed : "  + std::to_string(err));
                }

                int glAttributes[] = {
                    WGL_CONTEXT_MAJOR_VERSION_ARB, attr[GLAttributes::MAJOR_VERSION],
                    WGL_CONTEXT_MINOR_VERSION_ARB, attr[GLAttributes::MINOR_VERSION],
        			WGL_CONTEXT_PROFILE_MASK_ARB, WGL_CONTEXT_CORE_PROFILE_BIT_ARB,
                    0
                };

                internal = wglCreateContextAttribsARB(window.getDevice(), NULL, glAttributes);

                wglMakeCurrent(window.getDevice(), NULL);
                wglDeleteContext(tmpContext);
                wglMakeCurrent(window.getDevice(), internal);

                err = glewInit();
                if (err != GLEW_OK) {
                    wglMakeCurrent(window.getDevice(), NULL);
                    wglDeleteContext(internal);
                    throw std::invalid_argument("Glew Init Failed : " + std::to_string(err));
                }
            }

            void Context::release() {
                wglMakeCurrent(NULL, NULL);
                wglDeleteContext(internal);
                owned = false;
            }


        }
    }
