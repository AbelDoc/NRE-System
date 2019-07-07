
    /**
     * @file NRE_Context.tpp
     * @brief Implementation of Graphics's API's Object : Context
     * @author Louis ABEL
     * @date 06/07/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Graphics {

            inline Context::~Context() {
                if (owned) {
                    release();
                }
            }

        }
    }
