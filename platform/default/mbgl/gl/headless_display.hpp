#pragma once

#include <memory>

namespace mbgl {

class HeadlessDisplay {
public:
    static std::shared_ptr<HeadlessDisplay> create() {
        std::shared_ptr<HeadlessDisplay> shared = instance.lock();
        
        if (!shared) {
            shared = std::shared_ptr<HeadlessDisplay>(new HeadlessDisplay());
            instance = shared;
        }
        
        return shared;
    }

    
    ~HeadlessDisplay();

    template <typename DisplayAttribute>
    DisplayAttribute attribute() const;

private:
    static std::weak_ptr<HeadlessDisplay> instance;
    
    HeadlessDisplay();
    
    class Impl;
    std::unique_ptr<Impl>  impl;
};

} // namespace mbgl
