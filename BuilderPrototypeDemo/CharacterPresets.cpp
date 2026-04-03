#include "CharacterPresets.h"

namespace builder_demo::presets {
    CharacterBuilder<true, true> warrior() {
        return CharacterBuilder{}
            .setName("Thorin")
            .setClass(CharacterClass::Warrior)
            .setLevel(10)
            .setHealth(220)
            .setMana(30)
            .setStrength(18)
            .setAgility(10)
            .setIntelligence(6)
            .setArmor(15)
            .addEquipment("Long Sword")
            .addEquipment("Steel Shield")
            .addEquipment("Heavy Armor")
            .addSkill("Slash")
            .addSkill("Shield Block")
            .addSkill("Battle Cry");
    }

    CharacterBuilder<true, true> mage() {
        return CharacterBuilder{}
            .setName("Elira")
            .setClass(CharacterClass::Mage)
            .setLevel(10)
            .setHealth(90)
            .setMana(250)
            .setStrength(4)
            .setAgility(9)
            .setIntelligence(20)
            .setArmor(3)
            .addEquipment("Magic Staff")
            .addEquipment("Spellbook")
            .addEquipment("Enchanted Robe")
            .addSkill("Fireball")
            .addSkill("Teleport")
            .addSkill("Arcane Blast");
    }
}