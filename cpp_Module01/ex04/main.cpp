
#include "Replace.hpp"

int main(int ac, char **av)
{
    if (ac == 4) {
        std::string filename = av[1];
        std::string s1 = av[2];
        std::string s2 = av[3];

        if (!replace(filename, s1, s2))
            return 1;
        std::cout << "file has been replaced successfully!!" << std::endl;

    }
    else
        std::cout << "three parameters only" << std::endl;
    return 0;
}