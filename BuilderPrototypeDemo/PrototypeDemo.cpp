#include "PrototypeDemo.h"
#include "Orc.h"
#include "Troll.h"
#include <iostream>
#include <memory>

namespace prototype_demo {

    void run() {
        std::cout << "===== Advanced Prototype demo =====\n";

        Orc orcPrototype(10, "hammer");
        Troll trollPrototype(50, 8);

        // 1. Typed cloning
        auto typedOrc = orcPrototype.cloneTyped();
        auto typedTroll = trollPrototype.cloneTyped();

        typedOrc->attack();
        typedOrc->berserkStrike();

        typedTroll->attack();
        typedTroll->regenerate();

        std::cout << "\n";

        // 2. Polymorphic cloning
        std::unique_ptr<Enemy> enemy1 = orcPrototype.clone();
        std::unique_ptr<Enemy> enemy2 = trollPrototype.clone();

        enemy1->attack();
        enemy2->attack();

        std::cout << "===================================\n\n";
    }

}