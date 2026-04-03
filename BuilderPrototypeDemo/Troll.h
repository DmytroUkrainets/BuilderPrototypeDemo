#pragma once

#include "Enemy.h"

namespace prototype_demo {

    class Troll final : public PrototypeCRTP<Troll, Enemy> {
    public:
        explicit Troll(int armor, int regeneration);

        void attack() const override;

        void regenerate() const;

    private:
        int armor_;
        int regeneration_;
    };

}