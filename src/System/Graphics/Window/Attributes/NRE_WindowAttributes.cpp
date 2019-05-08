
    /**
     * @file NRE_WindowAttributes.cpp
     * @brief Implementation of System's API's Object : WindowAttributes
     * @author Louis ABEL
     * @date 08/05/2019
     * @copyright CC-BY-NC-SA
     */

    #include "NRE_WindowAttributes.hpp"

    using namespace NRE::Math;

     namespace NRE {
         namespace System {

             WindowAttributes::WindowAttributes(std::string const& t, Point2D<unsigned int> const& pos, Vector2D<unsigned int> const& s) : title(t), position(pos), size(s) {
             }

             WindowAttributes::WindowAttributes(std::string const& t, Vector2D<unsigned int> const& s) : title(t), size(s) {
             }

             WindowAttributes::WindowAttributes(WindowAttributes const& attr) : title(attr.title), position(attr.position), size(attr.size) {
             }

             WindowAttributes::WindowAttributes(WindowAttributes && attr) : title(std::move(attr.title)), position(std::move(attr.position)), size(std::move(attr.size)) {
             }

             void WindowAttributes::setPosition(Point2D<unsigned int> const& pos) {
                 position = pos;
             }

             WindowAttributes& WindowAttributes::operator=(WindowAttributes const& attr) {
                 title = attr.title;
                 position = attr.position;
                 size = attr.size;
                 return *this;
             }

             WindowAttributes& WindowAttributes::operator=(WindowAttributes && attr) {
                 title = std::move(attr.title);
                 position = std::move(attr.position);
                 size = std::move(attr.size);
                 return *this;
             }

             std::string WindowAttributes::toString() const {
                std::string res(title);
                res += " | ";
                res += position.toString();
                res += " - ";
                res += std::to_string(size.getW());
                res += "x";
                res += std::to_string(size.getH());
                return res;
             }

             std::ostream& operator <<(std::ostream& stream, WindowAttributes const& o) {
                return stream << o.toString();
             }

        }
    }
