#include "PrototypeDemo.h"
#include "Orc.h"
#include "Troll.h"
#include <iostream>
#include <memory>

namespace prototype_demo {

    void run() {
        std::cout << "===== Prototype demo =====\n";

        std::unique_ptr<Enemy> orcPrototype =
            std::make_unique<Orc>(10);

        std::unique_ptr<Enemy> trollPrototype =
            std::make_unique<Troll>(50);

        auto orc1 = orcPrototype->clone();
        auto orc2 = orcPrototype->clone();

        auto troll1 = trollPrototype->clone();
        auto troll2 = trollPrototype->clone();

        orc1->attack();
        orc2->attack();

        troll1->attack();
        troll2->attack();

        std::cout << "===========================\n\n";
    }

}
