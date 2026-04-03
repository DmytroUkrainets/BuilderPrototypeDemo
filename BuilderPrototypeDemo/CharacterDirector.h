#pragma once

#include "CharacterBuilder.h"

namespace builder_demo {
    class CharacterDirector {
    public:
        Character createNoviceCharacter(CharacterBuilder& builder);
        Character createAdventurerCharacter(CharacterBuilder& builder);
        Character createEliteCharacter(CharacterBuilder& builder);
        Character createArenaCharacter(CharacterBuilder& builder);
    };
}