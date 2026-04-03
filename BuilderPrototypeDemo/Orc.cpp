#include "Orc.h"
#include <iostream>
#include <utility>

namespace prototype_demo {

    Orc::Orc(int strength, std::string weapon)
        : strength_(strength), weapon_(std::move(weapon)) {
    }

    void Orc::attack() const {
        std::cout << "Orc attacks with " << weapon_
            << " and strength " << strength_ << "\n";
    }

    void Orc::berserkStrike() const {
        std::cout << "Orc performs berserk strike with power "
            << strength_ * 2 << "\n";
    }

}