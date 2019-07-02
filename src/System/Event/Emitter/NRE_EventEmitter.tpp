
    /**
     * @file NRE_EventEmitter.tpp
     * @brief Implementation of Event's API's Object : EventEmitter
     * @author Louis ABEL
     * @date 02/07/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Event {

            template <class T>
            template <class ... Args>
            inline bool EventEmitter<T>::emit(Args && ... args) {
                T event(std::forward<Args>(args)...);
                auto it = begin();
                while (!isConsumed() && it != end()) {
                    (*it)->update(this, &event);
                    it++;
                }
                bool res = isConsumed();
                setConsumed(false);
                return res;
            }

            template <class T>
            inline typename EventEmitter<T>::Category EventEmitter<T>::getCategory() {
                static Category category = counter++;
                return category;
            }

        }
    }
