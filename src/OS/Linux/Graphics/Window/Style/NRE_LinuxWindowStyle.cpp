
    /**
     * @file NRE_LinuxWindowStyle.cpp
     * @brief Implementation of Graphics's API's Object : WindowStyle
     * @author Louis ABEL
     * @date 09/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "../../../../../System/Graphics/Window/Style/NRE_WindowStyle.hpp"

     namespace NRE {
         namespace Graphics {

             WindowStyle::NativeWindowHints WindowStyle::toNativeStyle() const {
                 NativeWindowHints hints;
                 hints.flags       = HINTS_FUNCTIONS | HINTS_DECORATIONS;
                 hints.decorations = DECOR_BORDER | DECOR_TITLE | DECOR_MINIMIZE | DECOR_MENU;
                 hints.functions   = FUNC_MOVE | FUNC_MINIMIZE;

                 if ((style & CLOSEABLE) || (style & RESIZEABLE)) {
                     hints.functions |= FUNC_CLOSE;
                 }
                 if (style & RESIZEABLE) {
                     hints.decorations |= DECOR_MAXIMIZE | DECOR_RESIZEH;
                     hints.functions   |= FUNC_MAXIMIZE | FUNC_RESIZE;
                 }
                 return hints;
             }

        }
    }
