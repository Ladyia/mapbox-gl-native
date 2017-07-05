#include <mbgl/gl/headless_display.hpp>

namespace mbgl {

class HeadlessDisplay::Impl {};

HeadlessDisplay::HeadlessDisplay() {
    // no-op
}

HeadlessDisplay::~HeadlessDisplay() {
    // no-op
}

std::weak_ptr<HeadlessDisplay> HeadlessDisplay::instance;

} // namespace mbgl
