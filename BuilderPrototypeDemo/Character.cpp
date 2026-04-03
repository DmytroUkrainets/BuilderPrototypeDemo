#include "Character.h"
#include <iostream>
#include <string>

namespace builder_demo {
    namespace {
        std::string toString(CharacterClass characterClass) {
            switch (characterClass) {
            case CharacterClass::Warrior:
                return "Warrior";
            case CharacterClass::Mage:
                return "Mage";
            case CharacterClass::Rogue:
                return "Rogue";
            default:
                return "Unknown";
            }
        }
    }

    void Character::print() const {
        std::cout << "Name: " << name_ << "\n";
        std::cout << "Class: " << toString(characterClass_) << "\n";
        std::cout << "Level: " << level_ << "\n";

        std::cout << "Attributes:\n";
        std::cout << " - Health: " << stats_.health << "\n";
        std::cout << " - Mana: " << stats_.mana << "\n";
        std::cout << " - Strength: " << stats_.strength << "\n";
        std::cout << " - Agility: " << stats_.agility << "\n";
        std::cout << " - Intelligence: " << stats_.intelligence << "\n";
        std::cout << " - Armor: " << stats_.armor << "\n";

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