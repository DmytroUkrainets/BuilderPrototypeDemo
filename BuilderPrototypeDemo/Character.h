#pragma once

#include <string>
#include <vector>

namespace builder_demo {
    enum class CharacterClass {
        Warrior,
        Mage,
        Rogue
    };

    struct Stats {
        int health{ 0 };
        int mana{ 0 };
        int strength{ 0 };
        int agility{ 0 };
        int intelligence{ 0 };
        int armor{ 0 };
    };

    template<bool HasName, bool HasClass>
    class CharacterBuilder;

    class Character {
        template<bool HasName, bool HasClass>
        friend class CharacterBuilder;

    public:
        void print() const;

    private:
        std::string name_;
        CharacterClass characterClass_{ CharacterClass::Warrior };
        int level_{ 1 };
        Stats stats_;
        std::vector<std::string> equipment_;
        std::vector<std::string> skills_;
    };
}