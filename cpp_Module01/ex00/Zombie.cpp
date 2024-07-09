
#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string Name):name(Name)
{
    std::cout << "Zombie " << Name << " has risen " << std::endl;
}

Zombie::~Zombie(){
    std::cout << "The zombie  -" << name <<"- has fallen " << std::endl;
}

void Zombie::announce(void)
{
    std::cout << name << ":BraiiiiiiinnnzzzZ..." << std::endl; 
}