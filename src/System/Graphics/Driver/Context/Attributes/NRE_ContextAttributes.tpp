
    /**
     * @file NRE_ContextAttributes.hpp
     * @brief Implementation of Graphics's API's Object : ContextAttributes
     * @author Louis ABEL
     * @date 06/07/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Graphics {

            inline ContextAttributes::ContextAttributes() {
                (*this)[GLAttributes::RED_SIZE] = 0;
                (*this)[GLAttributes::GREEN_SIZE] = 0;
                (*this)[GLAttributes::BLUE_SIZE] = 0;
                (*this)[GLAttributes::ALPHA_SIZE] = 0;
                (*this)[GLAttributes::BUFFER_SIZE] = 32;
                (*this)[GLAttributes::DOUBLEBUFFER] = 1;
                (*this)[GLAttributes::DEPTH_SIZE] = 24;
                (*this)[GLAttributes::STENCIL_SIZE] = 8;
                (*this)[GLAttributes::ACCUM_RED_SIZE] = 0;
                (*this)[GLAttributes::ACCUM_GREEN_SIZE] = 0;
                (*this)[GLAttributes::ACCUM_BLUE_SIZE] = 0;
                (*this)[GLAttributes::ACCUM_ALPHA_SIZE] = 0;
                (*this)[GLAttributes::ACCUM_ALPHA_SIZE] = 0;
                (*this)[GLAttributes::STEREO] = 0;
                (*this)[GLAttributes::MULTISAMPLE_BUFFERS] = 0;
                (*this)[GLAttributes::MULTISAMPLE_SAMPLES] = 0;
                (*this)[GLAttributes::ACCELERATED_VISUAL] = 1;
                (*this)[GLAttributes::MAJOR_VERSION] = 3;
                (*this)[GLAttributes::MINOR_VERSION] = 2;
            }

            inline int& ContextAttributes::operator[](GLAttributes index) {
                return attributes[static_cast <std::size_t> (index)];
            }

            inline int const& ContextAttributes::operator[](GLAttributes index) const {
                return attributes[static_cast <std::size_t> (index)];
            }
        }
    }
