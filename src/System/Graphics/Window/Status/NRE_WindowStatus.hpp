
    /**
     * @file NRE_WindowStatus.hpp
     * @brief Declaration of System's API's Object : WindowStatus
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
          * @namespace System
          * @brief System's API
          */
         namespace System {

             /**
              * @class WindowStatus
              * @brief Manage a window status
              */
             class WindowStatus {
                 private :  // Fields
                    bool closed;    /**< Tell if the window is closed */

                 public :   // Methods
                    //## Constructor ##//
                        /**
                         * Construct the window default status
                         */
                        WindowStatus();

                    //## Copy Constructor ##//
                        /**
                         * Copy the window status into this
                         * @param status the window status to copy
                         */
                        WindowStatus(WindowStatus const& status);

                    //## Move Constructor ##//
                        /**
                         * Move the window status into this
                         * @param status the window status to move
                         */
                        WindowStatus(WindowStatus && status);

                    //## Deconstructor ##//
                        /**
                         * WindowStatus Deconstructor
                         */
                        ~WindowStatus() = default;

                    //## Getter ##//
                        /**
                         * @return the closed status
                         */
                        bool isClosed() const;

                    //## Setter ##//
                        /**
                         * Set the closed status
                         * @param status the new closed status
                         */
                        void setClosed(bool status);

                    //## Assignment Operator ##//
                        /**
                         * Copy the window status into this
                         * @param status the object to copy into this
                         * @return       the reference of himself
                         */
                        WindowStatus& operator =(WindowStatus const& status);
                        /**
                         * Move the window status into this
                         * @param status the object to move into this
                         * @return       the reference of himself
                         */
                        WindowStatus& operator =(WindowStatus && status);
             };
         }
     }
