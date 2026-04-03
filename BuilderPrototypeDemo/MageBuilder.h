#pragma once

#include "CharacterBuilder.h"

namespace builder_demo {
    class MageBuilder : public CharacterBuilder {
    public:
        MageBuilder();

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