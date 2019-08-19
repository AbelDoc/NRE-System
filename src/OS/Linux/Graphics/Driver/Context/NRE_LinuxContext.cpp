
    /**
     * @file NRE_LinuxContext.cpp
     * @brief Implementation of Graphics's API's Object : Context
     * @author Louis ABEL
     * @date 06/07/2019
     * @copyright CC-BY-NC-SA
     */

    #include "../../../../../System/Graphics/Driver/Context/NRE_Context.hpp"

    using namespace NRE::Utility;
    using namespace NRE::Exception;

    namespace NRE {
        namespace Graphics {

            Context::Context(InternalWindow& window, ContextAttributes const& attr) : attributes(attr) {
                Display* display = Singleton<GraphicsDriver>::get().getDisplay();

                if (attr[GLAttributes::MAJOR_VERSION] < 3) {
                    int pixelAttributes[15];
                    int counter = 0;
                    pixelAttributes[counter++] = GLX_RGBA;
                    pixelAttributes[counter++] = GLX_RED_SIZE;
                    pixelAttributes[counter++] = attr[GLAttributes::RED_SIZE];
                    pixelAttributes[counter++] = GLX_GREEN_SIZE;
                    pixelAttributes[counter++] = attr[GLAttributes::GREEN_SIZE];
                    pixelAttributes[counter++] = GLX_BLUE_SIZE;
                    pixelAttributes[counter++] = attr[GLAttributes::BLUE_SIZE];
                    pixelAttributes[counter++] = GLX_ALPHA_SIZE;
                    pixelAttributes[counter++] = attr[GLAttributes::ALPHA_SIZE];
                    pixelAttributes[counter++] = GLX_DEPTH_SIZE;
                    pixelAttributes[counter++] = attr[GLAttributes::DEPTH_SIZE];
                    pixelAttributes[counter++] = GLX_STENCIL_SIZE;
                    pixelAttributes[counter++] = attr[GLAttributes::STENCIL_SIZE];

                    if (attr[GLAttributes::DOUBLEBUFFER]) {
                        pixelAttributes[counter++] = GLX_DOUBLEBUFFER;
                    }
                    if (attr[GLAttributes::STEREO]) {
                        pixelAttributes[counter++] = GLX_STEREO;
                    }

                    XVisualInfo* vInfo = glXChooseVisual(display, window.getXId(), pixelAttributes);
                    if (vInfo == nullptr) {
                        throw GLXException("Can't find required visual.");
                    }
                    internal = glXCreateContext(display, vInfo, 0, GL_TRUE);

                    glXMakeCurrent(display, window.getXId(), internal);
                } else {
                    if (glXChooseFBConfig == nullptr) {
                        throw GLXException("GLX 1.3 or higher is required.");
                    }
                    const int pixelAttributes[] = {
            			GLX_X_RENDERABLE, GL_TRUE,
            			GLX_DRAWABLE_TYPE, GLX_WINDOW_BIT,
            			GLX_DOUBLEBUFFER, (attr[GLAttributes::DOUBLEBUFFER]) ? (GL_TRUE) : (GL_FALSE),
            			GLX_RENDER_TYPE, GLX_RGBA_BIT,
            			GLX_X_VISUAL_TYPE, GLX_TRUE_COLOR,
                        GLX_RED_SIZE, attr[GLAttributes::RED_SIZE],
                        GLX_GREEN_SIZE, attr[GLAttributes::GREEN_SIZE],
                        GLX_BLUE_SIZE, attr[GLAttributes::BLUE_SIZE],
                        GLX_ALPHA_SIZE, attr[GLAttributes::ALPHA_SIZE],
            			GLX_DEPTH_SIZE, attr[GLAttributes::DEPTH_SIZE],
            			GLX_STENCIL_SIZE, attr[GLAttributes::STENCIL_SIZE],
            			GLX_SAMPLE_BUFFERS, (attr[GLAttributes::MULTISAMPLE_BUFFERS] > 1) ? (GL_TRUE) : (GL_FALSE),
            			GLX_SAMPLES, (attr[GLAttributes::MULTISAMPLE_BUFFERS] > 1) ? (attr[GLAttributes::MULTISAMPLE_SAMPLES]) : (0),
                        GLX_STEREO, (attr[GLAttributes::STEREO]) ? (GL_TRUE) : (GL_FALSE),
            			0
                    };

                    int count;
                    GLXFBConfig* configs = glXChooseFBConfig(display, window.getXId(), pixelAttributes, &count);
                    if (count == 0) {
                        throw GLXException("No matching configuration.");
                    }
                    GLXFBConfig config = configs[0];
                    XFree(configs);

                    NativeContextType tmpContext = glXCreateNewContext(display, config, GLX_RGBA_TYPE, 0, True);
                    glXMakeCurrent(display, window.getXId(), tmpContext);

                    GLenum err = glxewInit();
                    if (err != GLEW_OK) {
        	            glXMakeCurrent(display, 0, NULL);
                        glXDestroyContext(display, tmpContext);
                        throw GlewException("Glxew Init Failed.");
                    }

                    int glAttributes[] = {
                        GLX_CONTEXT_MAJOR_VERSION_ARB, attr[GLAttributes::MAJOR_VERSION],
                        GLX_CONTEXT_MINOR_VERSION_ARB, attr[GLAttributes::MINOR_VERSION],
            			GLX_CONTEXT_PROFILE_MASK_ARB, GLX_CONTEXT_CORE_PROFILE_BIT_ARB,
                        0
                    };

                    internal = glXCreateContextAttribsARB(display, config, NULL, GL_TRUE, glAttributes);
                    if (!internal) {
                        throw GLXException("Could not create context.");
                    }

                    glXMakeCurrent(display, 0, NULL);
                    glXDestroyContext(display, tmpContext);
                    glXMakeCurrent(display, window.getXId(), internal);
                }

                if (attr[GLAttributes::MAJOR_VERSION] > 1 || (attr[GLAttributes::MAJOR_VERSION] == 1 && attr[GLAttributes::MINOR_VERSION] >= 1)) {
                    GLenum err = glewInit();
                    if (err != GLEW_OK) {
                        glXMakeCurrent(display, 0, NULL);
                        glXDestroyContext(display, internal);
                        throw GlewException(String("Glew Init Failed : ") << err);
                    }
                }
            }

            void Context::release() {
                Display* display = Singleton<GraphicsDriver>::get().getDisplay();
	            glXMakeCurrent(display, 0, NULL);
                glXDestroyContext(display, internal);
                owned = false;
            }

        }
    }
