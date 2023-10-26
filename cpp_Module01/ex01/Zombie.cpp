
#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string Name):name(Name){
}

Zombie::~Zombie(){}

void Zombie::announce(void)
{
    std::cout << name << ":BraiiiiiiinnnzzzZ..." << std::endl; 
}