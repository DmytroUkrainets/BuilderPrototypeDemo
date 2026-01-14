#include "WarriorBuilder.h"

namespace builder_demo {
    // Forms the basic characteristics of the warrior
    void WarriorBuilder::buildStats() {
        character_.setHealth(200);
    }

    // Adds equipment specific to a warrior
    void WarriorBuilder::buildEquipment() {
        character_.addEquipment("Sword");
        character_.addEquipment("Shield");
    }

    // Adds character combat abilities
    void WarriorBuilder::buildSkills() {
        character_.addSkill("Slash");
    }

    // Returns a fully constructed Character object
    Character WarriorBuilder::getResult() {
        return character_;
    }
}