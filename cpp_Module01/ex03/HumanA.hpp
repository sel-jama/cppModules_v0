
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
    public:
        HumanA(const std::string name, const Weapon& weapon);
        void attack() const;

    private:
        std::string name;
        const Weapon& weapon;
};

#endif