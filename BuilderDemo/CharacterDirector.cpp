#include "CharacterDirector.h"

namespace builder_demo {
    // Calls Builder steps in a fixed order
    Character CharacterDirector::create(CharacterBuilder& builder) {
        builder.buildStats();
        builder.buildEquipment();
        builder.buildSkills();
        return builder.getResult();
    }
}