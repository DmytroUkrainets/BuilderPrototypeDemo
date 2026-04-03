#pragma once

#include <string>
#include <vector>

namespace builder_demo {
    class Character {
    public:
        void setName(const std::string& name);
        void setClassType(const std::string& classType);
        void setLevel(int level);

        void setHealth(int health);
        void setMana(int mana);
        void setStrength(int strength);
        void setAgility(int agility);
        void setIntelligence(int intelligence);
        void setArmor(int armor);

        void addEquipment(const std::string& item);
        void addSkill(const std::string& skill);

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
