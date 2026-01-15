#pragma once

#include "Enemy.h"
#include <string>

namespace prototype_demo {

    class Orc : public Enemy {
    public:
        // Constructor that disallows implicit type conversions
        explicit Orc(int strength);

        // Returns a polymorphic copy of the current object
        std::unique_ptr<Enemy> clone() const override;

        // Implementing the orc attack behavior
        void attack() const override;

    private:
        // Orc characteristic that determines attack power
        int strength_;
    };

}
