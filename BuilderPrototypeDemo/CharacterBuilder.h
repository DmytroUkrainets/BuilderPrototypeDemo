#pragma once

#include "Character.h"
#include <optional>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

namespace builder_demo {
    template<bool HasName = false, bool HasClass = false>
    class CharacterBuilder {
    public:
        CharacterBuilder() = default;

        CharacterBuilder(
            std::optional<std::string> name,
            std::optional<CharacterClass> characterClass,
            std::optional<int> level,
            std::optional<int> health,
            std::optional<int> mana,
            std::optional<int> strength,
            std::optional<int> agility,
            std::optional<int> intelligence,
            std::optional<int> armor,
            std::vector<std::string> equipment,
            std::vector<std::string> skills
        )
            : name_(std::move(name)),
            characterClass_(characterClass),
            level_(level),
            health_(health),
            mana_(mana),
            strength_(strength),
            agility_(agility),
            intelligence_(intelligence),
            armor_(armor),
            equipment_(std::move(equipment)),
            skills_(std::move(skills)) {
        }

        auto setName(std::string name) const -> CharacterBuilder<true, HasClass> {
            auto next = copy();
            next.name_ = std::move(name);

            return CharacterBuilder<true, HasClass>{
                std::move(next.name_),
                    next.characterClass_,
                    next.level_,
                    next.health_,
                    next.mana_,
                    next.strength_,
                    next.agility_,
                    next.intelligence_,
                    next.armor_,
                    std::move(next.equipment_),
                    std::move(next.skills_)
            };
        }

        auto setClass(CharacterClass characterClass) const -> CharacterBuilder<HasName, true> {
            auto next = copy();
            next.characterClass_ = characterClass;

            return CharacterBuilder<HasName, true>{
                std::move(next.name_),
                    next.characterClass_,
                    next.level_,
                    next.health_,
                    next.mana_,
                    next.strength_,
                    next.agility_,
                    next.intelligence_,
                    next.armor_,
                    std::move(next.equipment_),
                    std::move(next.skills_)
            };
        }

        auto setLevel(int level) const -> CharacterBuilder<HasName, HasClass> {
            auto next = copy();
            next.level_ = level;
            return next;
        }

        auto setHealth(int health) const -> CharacterBuilder<HasName, HasClass> {
            auto next = copy();
            next.health_ = health;
            return next;
        }

        auto setMana(int mana) const -> CharacterBuilder<HasName, HasClass> {
            auto next = copy();
            next.mana_ = mana;
            return next;
        }

        auto setStrength(int strength) const -> CharacterBuilder<HasName, HasClass> {
            auto next = copy();
            next.strength_ = strength;
            return next;
        }

        auto setAgility(int agility) const -> CharacterBuilder<HasName, HasClass> {
            auto next = copy();
            next.agility_ = agility;
            return next;
        }

        auto setIntelligence(int intelligence) const -> CharacterBuilder<HasName, HasClass> {
            auto next = copy();
            next.intelligence_ = intelligence;
            return next;
        }

        auto setArmor(int armor) const -> CharacterBuilder<HasName, HasClass> {
            auto next = copy();
            next.armor_ = armor;
            return next;
        }

        auto addEquipment(std::string item) const -> CharacterBuilder<HasName, HasClass> {
            auto next = copy();
            next.equipment_.push_back(std::move(item));
            return next;
        }

        auto addSkill(std::string skill) const -> CharacterBuilder<HasName, HasClass> {
            auto next = copy();
            next.skills_.push_back(std::move(skill));
            return next;
        }

        Character build() const requires (HasName&& HasClass) {
            validateRuntime();

            Character character;
            character.name_ = *name_;
            character.characterClass_ = *characterClass_;
            character.level_ = *level_;

            character.stats_.health = *health_;
            character.stats_.mana = *mana_;
            character.stats_.strength = *strength_;
            character.stats_.agility = *agility_;
            character.stats_.intelligence = *intelligence_;
            character.stats_.armor = *armor_;

            character.equipment_ = equipment_;
            character.skills_ = skills_;

            return character;
        }

    private:
        auto copy() const -> CharacterBuilder<HasName, HasClass> {
            return CharacterBuilder<HasName, HasClass>{
                name_,
                    characterClass_,
                    level_,
                    health_,
                    mana_,
                    strength_,
                    agility_,
                    intelligence_,
                    armor_,
                    equipment_,
                    skills_
            };
        }

        void validateRuntime() const {
            if (!level_ || *level_ < 1) {
                throw std::runtime_error("Character level must be at least 1.");
            }

            if (!health_ || *health_ < 0) {
                throw std::runtime_error("Character health must be set and cannot be negative.");
            }

            if (!mana_ || *mana_ < 0) {
                throw std::runtime_error("Character mana must be set and cannot be negative.");
            }

            if (!strength_ || *strength_ < 0) {
                throw std::runtime_error("Character strength must be set and cannot be negative.");
            }

            if (!agility_ || *agility_ < 0) {
                throw std::runtime_error("Character agility must be set and cannot be negative.");
            }

            if (!intelligence_ || *intelligence_ < 0) {
                throw std::runtime_error("Character intelligence must be set and cannot be negative.");
            }

            if (!armor_ || *armor_ < 0) {
                throw std::runtime_error("Character armor must be set and cannot be negative.");
            }

            if (equipment_.empty()) {
                throw std::runtime_error("Character must have at least one equipment item.");
            }

            if (skills_.empty()) {
                throw std::runtime_error("Character must have at least one skill.");
            }

            switch (*characterClass_) {
            case CharacterClass::Warrior:
                if (*strength_ < *intelligence_) {
                    throw std::runtime_error("Warrior should have strength not lower than intelligence.");
                }
                if (*armor_ <= 0) {
                    throw std::runtime_error("Warrior should have armor greater than zero.");
                }
                break;

            case CharacterClass::Mage:
                if (*mana_ <= 0) {
                    throw std::runtime_error("Mage should have mana greater than zero.");
                }
                if (*intelligence_ < *strength_) {
                    throw std::runtime_error("Mage should have intelligence not lower than strength.");
                }
                break;

            case CharacterClass::Rogue:
                if (*agility_ < *strength_) {
                    throw std::runtime_error("Rogue should have agility not lower than strength.");
                }
                break;
            }
        }

        std::optional<std::string> name_;
        std::optional<CharacterClass> characterClass_;
        std::optional<int> level_;

        std::optional<int> health_;
        std::optional<int> mana_;
        std::optional<int> strength_;
        std::optional<int> agility_;
        std::optional<int> intelligence_;
        std::optional<int> armor_;

        std::vector<std::string> equipment_;
        std::vector<std::string> skills_;
    };
}