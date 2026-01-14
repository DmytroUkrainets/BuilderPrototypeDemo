#include "Troll.h"
#include <iostream>

namespace prototype_demo {

    // Constructor that initializes the internal state of the object
    Troll::Troll(int armor)
        : armor_(armor) {
    }

    // Creates a polymorphic copy of the current object
    std::unique_ptr<Enemy> Troll::clone() const {
        return std::make_unique<Troll>(*this);
    }

    // Implementing the troll attack behavior
    void Troll::attack() const {
        std::cout << "Troll attacks with armor "
            << armor_ << "\n";
    }

}
