#pragma once

#include "Character.h"
#include <optional>
#include <string>
#include <vector>

namespace builder_demo {
    class CharacterBuilder {
    public:
        CharacterBuilder& setName(std::string name);
        CharacterBuilder& setClassType(std::string classType);
        CharacterBuilder& setLevel(int level);

        CharacterBuilder& setHealth(int health);
        CharacterBuilder& setMana(int mana);
        CharacterBuilder& setStrength(int strength);
        CharacterBuilder& setAgility(int agility);
        CharacterBuilder& setIntelligence(int intelligence);
        CharacterBuilder& setArmor(int armor);

        CharacterBuilder& addEquipment(std::string item);
        CharacterBuilder& addSkill(std::string skill);

        Character build() const;
        void reset();

    private:
        void validate() const;

        std::optional<std::string> name_;
        std::optional<std::string> classType_;
        std::optional<int> level_;

        std::optional<int> health_;
        std::optional<int> mana_;
        std::optional<int> strength_;
        std::optional<int> agility_;
        std::optional<int> intelligence_;
        std::optional<int> armor_;

        std::vector<std::string> equipment_;
        std::vector<std::string> skills_;
    };
}