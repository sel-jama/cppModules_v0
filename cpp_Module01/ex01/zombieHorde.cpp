
#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
    Zombie *horde;
    int i;

    std::cout << "\nPrepare for the horde: " << N << " zombies incoming ...\n" << std::endl;
    horde = new Zombie[N];
    i = 0;
    while (i < N)
    {
        horde[i] = Zombie(name);
        i++;
    }
    return horde;
}