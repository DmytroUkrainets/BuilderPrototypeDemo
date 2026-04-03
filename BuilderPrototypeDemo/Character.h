#pragma once

#include <string>
#include <vector>

namespace builder_demo {
    class CharacterBuilder;

    class Character {
        friend class CharacterBuilder;

    public:
        void print() const;

    private:
        std::string name_;
        std::string classType_;
        int level_{ 1 };

        int health_{ 0 };
        int mana_{ 0 };
        int strength_{ 0 };
        int agility_{ 0 };
        int intelligence_{ 0 };
        int armor_{ 0 };

        std::vector<std::string> equipment_;
        std::vector<std::string> skills_;
    };
}