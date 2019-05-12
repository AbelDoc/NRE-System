
    /**
     * @file NRE_WindowStyle.hpp
     * @brief Declaration of Graphics's API's Object : WindowStyle
     * @author Louis ABEL
     * @date 09/05/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

     #ifdef _WIN32                           // Windows
        #include <Windows.h>
     #elif __linux__                         // Linux
        #include <X11/Xlib.h>
     #else
        #error "Not Supported Yet or Unknown compiler"
     #endif

     #include <utility>

     /**
      * @namespace NRE
      * @brief The NearlyRealEngine's global namespace
      */
     namespace NRE {
         /**
          * @namespace Graphics
          * @brief Graphics's API
          */
         namespace Graphics {

             /**
              * @class WindowStyle
              * @brief Manage a window style
              */
             class WindowStyle {
                 private :  // Fields
                    unsigned int style;

                 public :   // Methods
                    //## Constructor ##//
                        /**
                         * Construct the window style
                         * @param s the style value
                         */
                        inline WindowStyle(unsigned int s = BASIC) : style(s) {
                        }

                    //## Copy Constructor ##//
                        /**
                         * Copy the window style into this
                         * @param ws the window style to copy
                         */
                        WindowStyle(WindowStyle const& ws) = default;

                    //## Move Constructor ##//
                        /**
                         * Move the window style into this
                         * @param ws the window style to move
                         */
                        WindowStyle(WindowStyle && ws) = default;

                    //## Deconstructor ##//
                        /**
                         * WindowStyle Deconstructor
                         */
                        ~WindowStyle() = default;

                    //## Methods ##//
                        #ifdef _WIN32                           // Windows
                            /**
                             * Convert the internal style to native style
                             * @return teh converted style
                             */
                            DWORD toNativeStyle() const;
                        #elif __linux__                         // Linux
                            struct NativeWindowHints {
                                unsigned long flags;
                                unsigned long functions;
                                unsigned long decorations;
                                long inputMode;
                                unsigned long state;
                            };

                			static constexpr unsigned long HINTS_FUNCTIONS   = 1 << 0;
                			static constexpr unsigned long HINTS_DECORATIONS = 1 << 1;
                			static constexpr unsigned long DECOR_BORDER      = 1 << 1;
                			static constexpr unsigned long DECOR_RESIZEH     = 1 << 2;
                			static constexpr unsigned long DECOR_TITLE       = 1 << 3;
                			static constexpr unsigned long DECOR_MENU        = 1 << 4;
                			static constexpr unsigned long DECOR_MINIMIZE    = 1 << 5;
                			static constexpr unsigned long DECOR_MAXIMIZE    = 1 << 6;
                			static constexpr unsigned long FUNC_RESIZE       = 1 << 1;
                			static constexpr unsigned long FUNC_MOVE         = 1 << 2;
                			static constexpr unsigned long FUNC_MINIMIZE     = 1 << 3;
                			static constexpr unsigned long FUNC_MAXIMIZE     = 1 << 4;
                            static constexpr unsigned long FUNC_CLOSE        = 1 << 5;

                            /**
                             * Convert the internal style to native style
                             * @return teh converted style
                             */
                            NativeWindowHints toNativeStyle() const;
                        #endif

                    //## Assignment Operator ##//
                        /**
                         * Copy the window style into this
                         * @param ws the object to copy into this
                         * @return   the reference of himself
                         */
                        WindowStyle& operator =(WindowStyle const& ws) = default;
                        /**
                         * Move the window style into this
                         * @param ws the object to move into this
                         * @return    the reference of himself
                         */
                        WindowStyle& operator =(WindowStyle && ws) = default;

                    //## Shortcut Operator ##//
                        /**
                         * Perform a bitwise OR with this
                         * @param ws the other style
                         * @return   the reference of himself
                         */
                        WindowStyle& operator |= (WindowStyle const& ws);

                    //## Bitwise Operator ##//
                        /**
                         * Compute the style resulting in the bitwize OR with this
                         * @param ws the other style
                         * @return   the computed style
                         */
                        WindowStyle operator |(WindowStyle const& ws) const;
                        /**
                         * Compute the style value resulting in the bitwize AND with this
                         * @param ws the other style
                         * @return   the computed style value
                         */
                        unsigned int operator &(unsigned int ws) const;

                public :    // Static
                    static constexpr unsigned int BASIC      = 0b000;
                    static constexpr unsigned int CLOSEABLE  = 0b001;
                    static constexpr unsigned int RESIZEABLE = 0b010;
                    static constexpr unsigned int FULLSCREEN = 0b100;
             };
         }
     }
