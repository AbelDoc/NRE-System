
    /**
     * @file NRE_EventHandler.tpp
     * @brief Implementation of Event's API's Object : EventHandler
     * @author Louis ABEL
     * @date 02/07/2019
     * @copyright CC-BY-NC-SA
     */

    namespace NRE {
        namespace Event {

            template <class T>
            inline EventHandler<T>::EventHandler(Handler && h) : handler(std::move(h)) {
                Utility::Singleton<System::System>::get().getEventSystem().addHandler<T>(this);
            }

            template <class T>
            inline EventHandler<T>::~EventHandler() {
                Utility::Singleton<System::System>::get().getEventSystem().removeHandler<T>(this);
            }

            template <class T>
            inline void EventHandler<T>::update(Utility::Observable* obs, void* arg) {
                static_cast <EventEmitter<T>*> (obs)->setConsumed(handler(*(static_cast <T*> (arg))));
            }
        }
    }
