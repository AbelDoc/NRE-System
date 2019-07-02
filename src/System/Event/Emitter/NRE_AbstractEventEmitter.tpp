
    /**
     * @file NRE_AbstractEventEmitter.tpp
     * @brief Implementation of Event's API's Object : AbstractEventEmitter
     * @author Louis ABEL
     * @date 02/07/2019
     * @copyright CC-BY-NC-SA
     */

     namespace NRE {
         namespace Event {

             inline bool AbstractEventEmitter::isConsumed() const {
                 return consumed;
             }

             inline void AbstractEventEmitter::setConsumed(bool state) {
                 consumed = state;
             }

         }
     }
