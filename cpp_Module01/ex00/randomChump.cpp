
#include "Zombie.hpp"

void Zombie::randomChump( std::string name )
{
    //it creates a zombie name it and annonce it
    Zombie random(name); //local obj
    random.announce();
}