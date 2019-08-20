
    /**
     * @file NRE_WindowAttributes.hpp
     * @brief Declaration of Graphics's API's Object : WindowAttributes
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

     #include <Header/NRE_Math.hpp>
     #include <Utility/String/NRE_String.hpp>

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
              * @class WindowAttributes
              * @brief Manage a window attributes
              */
             class WindowAttributes {
                 private :  // Fields
                     Utility::String title;                  /**< The window title */
                     Math::Point2D<unsigned int> position;   /**< The window top-left corner position */
                     Math::Vector2D<unsigned int> size;      /**< The window size */

                 public :   // Methods
                    //## Constructor ##//
                        /**
                         * No default constructor
                         */
                        WindowAttributes() = delete;
                        /**
                         * Construct the window attributes
                         * @param t   the window title
                         * @param pos the window top-left corner position
                         * @param s   the window size
                         */
                        WindowAttributes(Utility::String const& t, Math::Point2D<unsigned int> const& pos, Math::Vector2D<unsigned int> const& s);
                        /**
                         * Construct the window attributes
                         * @param t   the window title
                         * @param s   the window size
                         */
                        WindowAttributes(Utility::String const& t, Math::Vector2D<unsigned int> const& s);

                    //## Copy Constructor ##//
                        /**
                         * Copy the window attributes into this
                         * @param attr the window attributes to copy
                         */
                        WindowAttributes(WindowAttributes const& attr) = default;

                    //## Move Constructor ##//
                        /**
                         * Move the window attributes into this
                         * @param attr the window attributes to move
                         */
                        WindowAttributes(WindowAttributes && attr) = default;

                    //## Deconstructor ##//
                        /**
                         * WindowAttributes Deconstructor
                         */
                        ~WindowAttributes() = default;

                    //## Setter ##//
                        /**
                         * Set the window position attribute
                         * @param pos the new window position
                         */
                        void setPosition(Math::Point2D<unsigned int> const& pos);

                    //## Assignment Operator ##//
                        /**
                         * Copy the window attributes into this
                         * @param attr the object to copy into this
                         * @return     the reference of himself
                         */
                        WindowAttributes& operator =(WindowAttributes const& attr) = default;
                        /**
                         * Move the window attributes into this
                         * @param attr the object to move into this
                         * @return     the reference of himself
                         */
                        WindowAttributes& operator =(WindowAttributes && attr) = default;

                    //## Stream Operator ##//
                        /**
                         * Convert the window attributes into a string
                         * @return the converted window attributes
                         */
                        Utility::String toString() const;

            };

            /**
             * Output stream operator for the object
             * @param  stream the stream to add the object's string representation
             * @param  o      the object to add in the stream
             * @return the    modified stream
             */
            std::ostream& operator <<(std::ostream& stream, WindowAttributes const& o);

         }
     }

     #include "NRE_WindowAttributes.tpp"
