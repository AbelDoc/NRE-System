
    /**
     * @file NRE_Application.tpp
     * @brief Implementation of System's API's Object : Application
     * @author Louis ABEL
     * @date 09/07/2019
     * @copyright CC-BY-NC-SA
     */

     namespace NRE {
         namespace System {

             inline Application::Application(Core::String const& title, Math::Point2D<unsigned int> const& position, Math::Vector2D<unsigned int> const& size, unsigned int style, Graphics::ContextAttributes const& attr) : window(Core::Singleton<System>::get().getGraphicsSystem().createWindow(title, position, size, style, attr)) {
             }

             inline Application::Application(Core::String const& title, Math::Vector2D<unsigned int> const& size, unsigned int style, Graphics::ContextAttributes const& attr) : window(Core::Singleton<System>::get().getGraphicsSystem().createWindow(title, size, style, attr)) {
             }

             inline Application::~Application() {
                 for (Core::Observer*& handler : handlers) {
                     delete handler;
                 }
             }

             template <class T>
             inline void Application::addHandler(typename Event::EventHandler<T>::Handler && handler) {
                 handlers.pushBack(new Event::EventHandler<T>(std::forward<typename Event::EventHandler<T>::Handler>(handler)));
             }

             inline void Application::NREmain() {
                 try {
                     using namespace std::chrono_literals;
                     Time::Clock& sysClock = Core::Singleton<System>::get().getClock();
                     GraphicsSystem& gSys = Core::Singleton<System>::get().getGraphicsSystem();
                     EventSystem& eSys = Core::Singleton<System>::get().getEventSystem();

                     create();

                     sysClock.update();
                     sysClock.showFPS();
                     while (gSys.isRunning()) {
                         sysClock.updateAndSleep(16ms);
                         eSys.update();

                         update();
                         render();

                         window.refresh();
                     }

                     destroy();
                 } catch (std::exception const& e) {
                     std::cerr << "NRE Application critical exception :\n\t" << e.what() << std::endl;
                     destroy();
                 }
             }

         }
     }
