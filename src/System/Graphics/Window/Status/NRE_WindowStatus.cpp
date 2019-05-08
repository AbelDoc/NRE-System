
    /**
     * @file NRE_WindowStatus.cpp
     * @brief Implementation of System's API's Object : WindowStatus
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_WindowStatus.hpp"

     namespace NRE {
         namespace System {

             WindowStatus::WindowStatus() : closed(false) {
             }

             WindowStatus::WindowStatus(WindowStatus const& status) : closed(status.closed) {
             }

             WindowStatus::WindowStatus(WindowStatus && status) : closed(std::move(status.closed)) {
             }

             bool WindowStatus::isClosed() const {
                 return closed;
             }

             void WindowStatus::setClosed(bool status) {
                 closed = status;
             }

             WindowStatus& WindowStatus::operator=(WindowStatus const& status) {
                 closed = status.closed;
                 return *this;
             }

             WindowStatus& WindowStatus::operator=(WindowStatus && status) {
                 closed = std::move(status.closed);
                 return *this;
             }

        }
    }
