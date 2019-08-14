
    /**
     * @file NRE_System.tpp
     * @brief Implementation of System's API's Object : System
     * @author Louis ABEL
     * @date 02/07/2019
     * @copyright CC-BY-NC-SA
     */

     namespace NRE {
         namespace System {

             inline SystemInfo const& System::getSystemInfo() const {
                 return infos;
             }

             inline GraphicsSystem& System::getGraphicsSystem() {
                 return graphics;
             }

             inline EventSystem& System::getEventSystem() {
                 return events;
             }

             inline Time::Clock& System::getClock() {
                 return clock;
             }

         }
     }
