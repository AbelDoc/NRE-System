
    /**
     * @file NRE_EventSystem.tpp
     * @brief Implementation of System's API's Object : EventSystem
     * @author Louis ABEL
     * @date 02/07/2019
     * @copyright CC-BY-NC-SA
     */

     namespace NRE {
         namespace System {

             inline EventSystem::EventSystem() {
                 registerEvent<Event::KeyEvent>();
                 registerEvent<Event::ButtonEvent>();
                 registerEvent<Event::MotionEvent>();
                 registerEvent<Event::WheelMotionEvent>();
                 registerEvent<Event::WindowCloseEvent>();
                 updateInfos();
             }

             inline void EventSystem::setRelativeMode(bool mode) {
                 inputManager.setRelativeMode(mode);
             }

             template <class T, class ... Args>
             inline bool EventSystem::emit(Args && ... args) {
                 return getEmitter<T>().emit(std::forward<Args>(args)...);
             }

             template <class T>
             inline void EventSystem::addHandler(Event::EventHandler<T>* handler) {
                 getEmitter<T>().add(handler);
             }

             template <class T>
             inline void EventSystem::removeHandler(Event::EventHandler<T>* handler) {
                 getEmitter<T>().remove(handler);
             }

             template <class T>
             inline void EventSystem::registerEvent() {
                 emitters.emplaceBack(new Event::EventEmitter<T>());
             }

             template <class T>
             inline Event::EventEmitter<T>& EventSystem::getEmitter() {
                 return *(static_cast <Event::EventEmitter<T>*> (emitters[Event::EventEmitter<T>::getCategory()].get()));
             }
         }
     }
