#include "Character.h"
#include <iostream>

namespace builder_demo {
    void Character::setName(const std::string& name) {
        name_ = name;
    }

    void Character::setClassType(const std::string& classType) {
        classType_ = classType;
    }

    void Character::setLevel(int level) {
        level_ = level;
    }

    void Character::setHealth(int health) {
        health_ = health;
    }

    void Character::setMana(int mana) {
        mana_ = mana;
    }

    void Character::setStrength(int strength) {
        strength_ = strength;
    }

    void Character::setAgility(int agility) {
        agility_ = agility;
    }

    void Character::setIntelligence(int intelligence) {
        intelligence_ = intelligence;
    }

    void Character::setArmor(int armor) {
        armor_ = armor;
    }

    void Character::addEquipment(const std::string& item) {
        equipment_.push_back(item);
    }

    void Character::addSkill(const std::string& skill) {
        skills_.push_back(skill);
    }

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