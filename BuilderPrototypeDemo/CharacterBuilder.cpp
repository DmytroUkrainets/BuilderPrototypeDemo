#include "CharacterBuilder.h"
#include <stdexcept>
#include <utility>

namespace builder_demo {
    CharacterBuilder& CharacterBuilder::setName(std::string name) {
        name_ = std::move(name);
        return *this;
    }

    CharacterBuilder& CharacterBuilder::setClassType(std::string classType) {
        classType_ = std::move(classType);
        return *this;
    }

    CharacterBuilder& CharacterBuilder::setLevel(int level) {
        level_ = level;
        return *this;
    }

    CharacterBuilder& CharacterBuilder::setHealth(int health) {
        health_ = health;
        return *this;
    }

    CharacterBuilder& CharacterBuilder::setMana(int mana) {
        mana_ = mana;
        return *this;
    }

    CharacterBuilder& CharacterBuilder::setStrength(int strength) {
        strength_ = strength;
        return *this;
    }

    CharacterBuilder& CharacterBuilder::setAgility(int agility) {
        agility_ = agility;
        return *this;
    }

    CharacterBuilder& CharacterBuilder::setIntelligence(int intelligence) {
        intelligence_ = intelligence;
        return *this;
    }

    CharacterBuilder& CharacterBuilder::setArmor(int armor) {
        armor_ = armor;
        return *this;
    }

    CharacterBuilder& CharacterBuilder::addEquipment(std::string item) {
        equipment_.push_back(std::move(item));
        return *this;
    }

    CharacterBuilder& CharacterBuilder::addSkill(std::string skill) {
        skills_.push_back(std::move(skill));
        return *this;
    }

    void CharacterBuilder::validate() const {
        if (!name_ || name_->empty()) {
            throw std::runtime_error("Character name is required.");
        }

        if (!classType_ || classType_->empty()) {
            throw std::runtime_error("Character class type is required.");
        }

        if (!level_ || *level_ < 1) {
            throw std::runtime_error("Character level must be at least 1.");
        }

        if (!health_ || *health_ < 0) {
            throw std::runtime_error("Character health must be set and cannot be negative.");
        }

        if (!mana_ || *mana_ < 0) {
            throw std::runtime_error("Character mana must be set and cannot be negative.");
        }

        if (!strength_ || *strength_ < 0) {
            throw std::runtime_error("Character strength must be set and cannot be negative.");
        }

        if (!agility_ || *agility_ < 0) {
            throw std::runtime_error("Character agility must be set and cannot be negative.");
        }

        if (!intelligence_ || *intelligence_ < 0) {
            throw std::runtime_error("Character intelligence must be set and cannot be negative.");
        }

        if (!armor_ || *armor_ < 0) {
            throw std::runtime_error("Character armor must be set and cannot be negative.");
        }
    }

    Character CharacterBuilder::build() const {
        validate();

        Character character;
        character.name_ = *name_;
        character.classType_ = *classType_;
        character.level_ = *level_;

        character.health_ = *health_;
        character.mana_ = *mana_;
        character.strength_ = *strength_;
        character.agility_ = *agility_;
        character.intelligence_ = *intelligence_;
        character.armor_ = *armor_;

        character.equipment_ = equipment_;
        character.skills_ = skills_;

        return character;
    }

    void CharacterBuilder::reset() {
        name_.reset();
        classType_.reset();
        level_.reset();

        health_.reset();
        mana_.reset();
        strength_.reset();
        agility_.reset();
        intelligence_.reset();
        armor_.reset();

        equipment_.clear();
        skills_.clear();
    }
}