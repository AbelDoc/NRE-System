
    /**
     * @file NRE_WindowStatus.hpp
     * @brief Declaration of Graphics's API's Object : WindowStatus
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

     #include <utility>

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
              * @class WindowStatus
              * @brief Manage a window status
              */
             class WindowStatus {
                 private :  // Fields
                    bool closed;        /**< Tell if the window is closed */
                    bool inFullscreen;  /**< Tell if the window is in fullscreen mode */

                 public :   // Methods
                    //## Constructor ##//
                        /**
                         * Construct the window default status
                         */
                        WindowStatus() : closed(false), inFullscreen(false) {
                        }

                    //## Copy Constructor ##//
                        /**
                         * Copy the window status into this
                         * @param status the window status to copy
                         */
                        WindowStatus(WindowStatus const& status) = default;

                    //## Move Constructor ##//
                        /**
                         * Move the window status into this
                         * @param status the window status to move
                         */
                        WindowStatus(WindowStatus && status) = default;

                    //## Deconstructor ##//
                        /**
                         * WindowStatus Deconstructor
                         */
                        ~WindowStatus() = default;

                    //## Getter ##//
                        /**
                         * @return the closed status
                         */
                        inline bool isClosed() const {
                            return closed;
                        }
                        /**
                         * @return the fullscreen status
                         */
                        inline bool isInFullscreen() const {
                            return inFullscreen;
                        }

                    //## Setter ##//
                        /**
                         * Set the closed status
                         * @param status the new closed status
                         */
                        inline void setClosed(bool status) {
                            closed = status;
                        }
                        /**
                         * Set the fullscreen status
                         * @param status the new fullscreen status
                         */
                        inline void setFullscreen(bool status) {
                            inFullscreen = status;
                        }

                    //## Assignment Operator ##//
                        /**
                         * Copy the window status into this
                         * @param status the object to copy into this
                         * @return       the reference of himself
                         */
                        WindowStatus& operator =(WindowStatus const& status) = default;
                        /**
                         * Move the window status into this
                         * @param status the object to move into this
                         * @return       the reference of himself
                         */
                        WindowStatus& operator =(WindowStatus && status) = default;
             };
         }
     }
