
#include "Zombie.hpp"

int main()
{
        std::cout << "Zombies having brain snack ..in the stack\n" << std::endl;

        randomChump("Random");

        std::cout << std::endl ;
        std::cout << "Zombies of the heap graveyard\n" << std::endl;

        Zombie* z1 = newZombie("Ava");
        z1->announce();
        delete z1;

}