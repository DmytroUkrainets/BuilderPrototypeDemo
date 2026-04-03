#pragma once

#include "CharacterBuilder.h"

namespace builder_demo {
    class WarriorBuilder : public CharacterBuilder {
    public:
        WarriorBuilder();

        void reset() override;

        void buildIdentity() override;
        void buildAttributes() override;

        void buildStarterEquipment() override;
        void buildAdvancedEquipment() override;

        void buildBasicSkills() override;
        void buildAdvancedSkills() override;

        Character getResult() override;

    private:
        Character character_;
    };
}