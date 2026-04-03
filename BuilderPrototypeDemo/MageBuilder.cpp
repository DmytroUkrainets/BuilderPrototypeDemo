#include "MageBuilder.h"

namespace builder_demo {
    MageBuilder::MageBuilder() {
        reset();
    }

    void MageBuilder::reset() {
        character_ = Character{};
    }

    void MageBuilder::buildIdentity() {
        character_.setName("Elira");
        character_.setClassType("Mage");
        character_.setLevel(10);
    }

    void MageBuilder::buildAttributes() {
        character_.setHealth(90);
        character_.setMana(250);
        character_.setStrength(4);
        character_.setAgility(9);
        character_.setIntelligence(20);
        character_.setArmor(3);
    }

    void MageBuilder::buildStarterEquipment() {
        character_.addEquipment("Wooden Staff");
        character_.addEquipment("Apprentice Robe");
    }

    void MageBuilder::buildAdvancedEquipment() {
        character_.addEquipment("Magic Staff");
        character_.addEquipment("Spellbook");
        character_.addEquipment("Enchanted Robe");
    }

    void MageBuilder::buildBasicSkills() {
        character_.addSkill("Spark");
        character_.addSkill("Mana Shield");
    }

    void MageBuilder::buildAdvancedSkills() {
        character_.addSkill("Fireball");
        character_.addSkill("Teleport");
        character_.addSkill("Arcane Blast");
    }

    Character MageBuilder::getResult() {
        Character result = character_;
        reset();
        return result;
    }
}