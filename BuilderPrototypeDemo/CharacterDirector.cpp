#include "CharacterDirector.h"

namespace builder_demo {
    Character CharacterDirector::createNoviceCharacter(CharacterBuilder& builder) {
        builder.reset();
        builder.buildIdentity();
        builder.buildAttributes();
        builder.buildStarterEquipment();
        builder.buildBasicSkills();
        return builder.getResult();
    }

    Character CharacterDirector::createAdventurerCharacter(CharacterBuilder& builder) {
        builder.reset();
        builder.buildIdentity();
        builder.buildAttributes();
        builder.buildStarterEquipment();
        builder.buildBasicSkills();
        builder.buildAdvancedSkills();
        return builder.getResult();
    }

    Character CharacterDirector::createEliteCharacter(CharacterBuilder& builder) {
        builder.reset();
        builder.buildIdentity();
        builder.buildAttributes();
        builder.buildAdvancedEquipment();
        builder.buildBasicSkills();
        builder.buildAdvancedSkills();
        return builder.getResult();
    }

    Character CharacterDirector::createArenaCharacter(CharacterBuilder& builder) {
        builder.reset();
        builder.buildIdentity();
        builder.buildAttributes();
        builder.buildAdvancedEquipment();
        builder.buildAdvancedSkills();
        return builder.getResult();
    }
}