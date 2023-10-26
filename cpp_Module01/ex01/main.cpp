#include "Zombie.hpp"

int main()
{
    // Zombie obj;
    Zombie *zombies = Zombie::zombieHorde(5, "first");

    for (int i = 0; i < 5; i++) {
        zombies[i].announce();
    }
    delete[] zombies;
    std::cout << "\nZombies has fallen " << "\U0001F480" << std::endl;

    return 0;
}