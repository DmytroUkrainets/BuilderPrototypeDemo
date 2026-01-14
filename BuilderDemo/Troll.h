#pragma once

#include "Enemy.h"

namespace prototype_demo {

    class Troll : public Enemy {
    public:
        // Constructor that disallows implicit type conversions
        explicit Troll(int armor);

        // Returns a polymorphic copy of the current object
        std::unique_ptr<Enemy> clone() const override;
        
        // Implementing the orc attack behavior
        void attack() const override;

    private:
        // Troll characteristic that determines armor level
        int armor_;
    };

}
