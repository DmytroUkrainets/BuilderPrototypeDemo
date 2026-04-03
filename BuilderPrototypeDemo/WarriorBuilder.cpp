#include "WarriorBuilder.h"

namespace builder_demo {
    WarriorBuilder::WarriorBuilder() {
        reset();
    }

    void WarriorBuilder::reset() {
        character_ = Character{};
    }

    void WarriorBuilder::buildIdentity() {
        character_.setName("Thorin");
        character_.setClassType("Warrior");
        character_.setLevel(10);
    }

    void WarriorBuilder::buildAttributes() {
        character_.setHealth(220);
        character_.setMana(30);
        character_.setStrength(18);
        character_.setAgility(10);
        character_.setIntelligence(6);
        character_.setArmor(15);
    }

    void WarriorBuilder::buildStarterEquipment() {
        character_.addEquipment("Iron Sword");
        character_.addEquipment("Leather Armor");
    }

    void WarriorBuilder::buildAdvancedEquipment() {
        character_.addEquipment("Long Sword");
        character_.addEquipment("Steel Shield");
        character_.addEquipment("Heavy Armor");
    }

    void WarriorBuilder::buildBasicSkills() {
        character_.addSkill("Slash");
        character_.addSkill("Block");
    }

    void WarriorBuilder::buildAdvancedSkills() {
        character_.addSkill("Shield Block");
        character_.addSkill("Battle Cry");
        character_.addSkill("Whirlwind Strike");
    }

    Character WarriorBuilder::getResult() {
        Character result = character_;
        reset();
        return result;
    }
}