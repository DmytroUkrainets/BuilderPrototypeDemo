#include "Troll.h"
#include <iostream>

namespace prototype_demo {

    Troll::Troll(int armor, int regeneration)
        : armor_(armor), regeneration_(regeneration) {
    }

    void Troll::attack() const {
        std::cout << "Troll attacks with armor "
            << armor_ << " and regeneration "
            << regeneration_ << "\n";
    }

    void Troll::regenerate() const {
        std::cout << "Troll regenerates "
            << regeneration_ << " health points\n";
    }

}