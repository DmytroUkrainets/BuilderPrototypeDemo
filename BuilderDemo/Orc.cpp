#include "Orc.h"
#include <iostream>

namespace prototype_demo {

    // Constructor that initializes the internal state of the object
    Orc::Orc(int strength)
        : strength_(strength) {
    }

    // Creates a polymorphic copy of the current object
    std::unique_ptr<Enemy> Orc::clone() const {
        return std::make_unique<Orc>(*this);
    }

    // Implementing the orc attack behavior
    void Orc::attack() const {
        std::cout << "Orc attacks with strength "
            << strength_ << "\n";
    }

}
