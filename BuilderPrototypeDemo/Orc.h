#pragma once

#include "Enemy.h"
#include <string>

namespace prototype_demo {

    class Orc final : public PrototypeCRTP<Orc, Enemy> {
    public:
        explicit Orc(int strength, std::string weapon = "axe");

        void attack() const override;

        void berserkStrike() const;

    private:
        int strength_;
        std::string weapon_;
    };

}