
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
    public:
        Weapon(const std::string type);
        const std::string& getType() const;
        void setType(const std::string& type);

    private:
        std::string type;
};

#endif