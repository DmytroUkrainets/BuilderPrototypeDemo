#include <iostream>
#include "BuilderDemo.h"
#include "CharacterBuilder.h"
#include "CharacterPresets.h"

namespace builder_demo {
    void run() {
        Character warrior = presets::warrior().build();

        Character customMage = presets::mage()
            .setName("Aeris")
            .setLevel(12)
            .addSkill("Ice Storm")
            .build();

        Character customRogue = CharacterBuilder{}
            .setName("Valeera")
            .setClassType("Rogue")
            .setLevel(8)
            .setHealth(120)
            .setMana(40)
            .setStrength(11)
            .setAgility(19)
            .setIntelligence(9)
            .setArmor(7)
            .addEquipment("Daggers")
            .addEquipment("Leather Hood")
            .addSkill("Backstab")
            .addSkill("Stealth")
            .build();

        std::cout << "=== Warrior Preset ===\n";
        warrior.print();

        std::cout << "\n=== Customized Mage ===\n";
        customMage.print();

        std::cout << "\n=== Fully Custom Rogue ===\n";
        customRogue.print();
    }
}