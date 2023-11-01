
#include "Zombie.hpp"

// int main()
// {
//     Zombie *zombie;

//     zombie = newZombie("Tom");
//     zombie->announce();
//     delete (zombie);

//     randomChump("Random");

//     return 0;
// }

int main()
{
        std::cout << "Zombies having brain snack ..in the stack\n" << std::endl;

        // Zombie zombie; //constructor is called 
        randomChump("Random");

        std::cout << std::endl ;
        std::cout << "Zombies of the heap graveyard\n" << std::endl;

        Zombie* z1 = newZombie("Fatima");
        z1->announce();
        delete z1; // Release memory for z1

}