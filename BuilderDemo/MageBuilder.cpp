#include "MageBuilder.h"

namespace builder_demo {
    // Forms the basic characteristics of the magician
    void MageBuilder::buildStats() {
        character_.setHealth(100);
    }

    // Adds equipment specific to the mage
    void MageBuilder::buildEquipment() {
        character_.addEquipment("Staff");
    }

    // Adds magical abilities to the character
    void MageBuilder::buildSkills() {
        character_.addSkill("Fireball");
        character_.addSkill("Teleport");
    }

    // Returns a fully constructed Character object
    Character MageBuilder::getResult() {
        return character_;
    }
}