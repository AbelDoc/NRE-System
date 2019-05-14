
    /**
     * @file NRE_Key.hpp
     * @brief Declaration of Event's API's Object : Key
     * @author Louis ABEL
     * @date 14/05/2019
     * @copyright CC-BY-NC-SA
     */

     #pragma once

     #include "NRE_Keys.hpp"

     /**
     * @namespace NRE
     * @brief The NearlyRealEngine's global namespace
     */
    namespace NRE {
        /**
         * @namespace Event
         * @brief Event's API
         */
        namespace Event {

            /**
             * @class Key
             * @brief Manage a keyboard key
             */
            class Key {
                private:    //Fields
                    KeyCode code;   /**< The key's code */

                public:    // Methods
                    //## Constructor ##//
                        /**
                         * Default constructor
                         */
                        Key() = delete;
                        /**
                         * Construct a key from it's code
                         * @param c the key code
                         */
                        inline Key(KeyCode c) : code(c) {
                        }

                    //## Copy-Constructor ##//
                        /**
                         * Copy k into this
                         * @param k the key to copy the content
                         */
                        Key(Key const& k) = default;

                    //## Move-Constructor ##//
                        /**
                         * Move k into this, leaving k empty
                         * @param k the key to move
                         */
                        Key(Key && k) = default;

                    //## Deconstructor ##//
                        /**
                         * Key Deconstructor
                         */
                        ~Key() = default;

                    //## Getter ##//
                        /**
                         * Code getter
                         * @return the key's code
                         */
                        inline KeyCode getCode() const {
                            return code;
                        }

                    //## Assignment Operator ##//
                        /**
                         * Copy k into this
                         * @param k the object to copy into this
                         * @return  the reference of himself
                         */
                        Key& operator =(Key const& k) = default;
                        /**
                         * Move k into this
                         * @param k the object to move into this
                         * @return  the reference of himself
                         */
                        Key& operator =(Key && k) = default;

                    //## Comparison Operator ##//
                        /**
                         * Equality test between this and k
                         * @param k the key to test with this
                         * @return  the test's result
                         */
                        inline bool operator==(Key const& k) const {
                            return code == k.code;
                        }

            };
        }
    }
