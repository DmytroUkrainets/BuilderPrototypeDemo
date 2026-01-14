#pragma once

#include <memory>

namespace prototype_demo {

    class Enemy {
    public:
        // Virtual destructor
        virtual ~Enemy() = default;

        // Creates a polymorphic copy of the object (Prototype)
        virtual std::unique_ptr<Enemy> clone() const = 0;

        // Abstract method of enemy behavior
        virtual void attack() const = 0;
    };

}
