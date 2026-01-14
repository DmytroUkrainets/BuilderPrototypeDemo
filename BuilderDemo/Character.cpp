#include "Character.h"
#include <iostream>

namespace builder_demo {
    // Sets health of the character
    void Character::setHealth(int health) {
        health_ = health;
    }

    // Sets equipment of the character
    void Character::addEquipment(const std::string& item) {
        equipment_.push_back(item);
    }

    // Sets skills of the character
    void Character::addSkill(const std::string& skill) {
        skills_.push_back(skill);
    }

    // Prints character information to the console
    void Character::print() const {
        std::cout << "Health: " << health_ << "\n";

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