#pragma once

#include "Character.h"

namespace builder_demo {
    class CharacterBuilder {
    public:
        virtual ~CharacterBuilder() = default;

        virtual void reset() = 0;

        virtual void buildIdentity() = 0;
        virtual void buildAttributes() = 0;

        virtual void buildStarterEquipment() = 0;
        virtual void buildAdvancedEquipment() = 0;

        virtual void buildBasicSkills() = 0;
        virtual void buildAdvancedSkills() = 0;

        virtual Character getResult() = 0;
    };
}