#pragma once

#include "Character.h"

namespace builder_demo {
    class CharacterBuilder {
    public:
        // Virtual destructor
        virtual ~CharacterBuilder() = default;

        // Steps for building character characteristics
        virtual void buildStats() = 0;
        virtual void buildEquipment() = 0;
        virtual void buildSkills() = 0;

        // Returns a fully constructed Character object
        virtual Character getResult() = 0;
    };
}
