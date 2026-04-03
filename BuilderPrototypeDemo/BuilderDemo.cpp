#include <iostream>
#include "BuilderDemo.h"
#include "CharacterDirector.h"
#include "WarriorBuilder.h"
#include "MageBuilder.h"

namespace builder_demo {
    void run() {
        CharacterDirector director;
        WarriorBuilder warriorBuilder;
        MageBuilder mageBuilder;

        Character noviceWarrior = director.createNoviceCharacter(warriorBuilder);
        Character eliteMage = director.createEliteCharacter(mageBuilder);

        std::cout << "=== Novice Warrior ===\n";
        noviceWarrior.print();

        std::cout << "\n=== Elite Mage ===\n";
        eliteMage.print();
    }
}