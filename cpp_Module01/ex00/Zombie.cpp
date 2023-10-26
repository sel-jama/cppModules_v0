
#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string Name):name(Name)
{
    // name = Name;
    std::cout << "Zombie " << Name << " has risen " << "\U0001F9DF\u200D" << std::endl;
}

Zombie::~Zombie(){
    std::cout << "The zombie  -" << name <<"- has fallen " << "\U0001F480" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << name << ":BraiiiiiiinnnzzzZ..." << std::endl; 
}