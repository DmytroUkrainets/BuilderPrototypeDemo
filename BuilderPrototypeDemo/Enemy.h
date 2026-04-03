#pragma once

#include <memory>

namespace prototype_demo {

    class Enemy {
    public:
        virtual ~Enemy() = default;

        virtual std::unique_ptr<Enemy> clone() const = 0;

        virtual void attack() const = 0;
    };

    template<typename Derived, typename Base>
    class PrototypeCRTP : public Base {
    public:
        std::unique_ptr<Base> clone() const override {
            return std::make_unique<Derived>(self());
        }

        std::unique_ptr<Derived> cloneTyped() const {
            return std::make_unique<Derived>(self());
        }

    protected:
        const Derived& self() const {
            return static_cast<const Derived&>(*this);
        }
    };

}