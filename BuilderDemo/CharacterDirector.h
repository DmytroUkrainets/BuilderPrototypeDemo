#pragma once

#include "CharacterBuilder.h"

namespace builder_demo {
    class CharacterDirector {
    public:
        // Controls the character creation process
        Character create(CharacterBuilder& builder);
    };
}