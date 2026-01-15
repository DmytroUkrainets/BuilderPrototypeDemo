#include <iostream>

#include "WarriorBuilder.h"
#include "MageBuilder.h"
#include "CharacterDirector.h"

namespace builder_demo {

    void run() {
        std::cout << "===== Builder demo =====\n";

        CharacterDirector director;

        WarriorBuilder warriorBuilder;
        Character warrior = director.create(warriorBuilder);
        warrior.print();

        MageBuilder mageBuilder;
        Character mage = director.create(mageBuilder);
        mage.print();

        std::cout << "===========================\n\n";
    }

}
