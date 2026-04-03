#include "Character.h"
#include <iostream>

namespace builder_demo {
    void Character::print() const {
        std::cout << "Name: " << name_ << "\n";
        std::cout << "Class: " << classType_ << "\n";
        std::cout << "Level: " << level_ << "\n";

        std::cout << "Attributes:\n";
        std::cout << " - Health: " << health_ << "\n";
        std::cout << " - Mana: " << mana_ << "\n";
        std::cout << " - Strength: " << strength_ << "\n";
        std::cout << " - Agility: " << agility_ << "\n";
        std::cout << " - Intelligence: " << intelligence_ << "\n";
        std::cout << " - Armor: " << armor_ << "\n";

        std::cout << "Equipment:\n";
        for (const auto& item : equipment_) {
            std::cout << " - " << item << "\n";
        }

        std::cout << "Skills:\n";
        for (const auto& skill : skills_) {
            std::cout << " - " << skill << "\n";
        }
    }
}