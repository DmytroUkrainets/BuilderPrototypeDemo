#pragma once

#include <string>
#include <vector>

namespace builder_demo {
    class Character {
    public:
        // Sets characteristics of the character
        void setHealth(int health);
        void addEquipment(const std::string& item);
        void addSkill(const std::string& skill);

        // Prints character information to the console
        void print() const;

    private:
        // Characteristics of the character
        int health_{ 0 };
        std::vector<std::string> equipment_;
        std::vector<std::string> skills_;
    };
}
