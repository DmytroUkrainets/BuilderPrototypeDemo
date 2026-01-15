#pragma once

#include "CharacterBuilder.h"

namespace builder_demo {
    class MageBuilder : public CharacterBuilder {
    public:
        // Overrided steps for building character characteristics
        void buildStats() override;
        void buildEquipment() override;
        void buildSkills() override;

        // Returns a fully constructed Character object
        Character getResult() override;

    private:
        // Internal object that is gradually formed during construction
        Character character_;
    };
}