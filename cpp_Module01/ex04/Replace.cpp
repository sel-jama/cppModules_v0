
#include "Replace.hpp"

int replace(std::string filename, std::string s1, std::string s2)
{
    std::string replacef;
    std::ifstream inputf(filename);
    if (!inputf)
    {
        std::cout << "File not found" << std::endl;
        return 1;
    }
    replacef = filename + ".replace";
    std::ofstream outputf(replacef);
    if (!outputf)
    {
        std::cout << "File not found" << std::endl;
        return 1;
    }

    std::string line;
    while (inputf >> line)
    {
        std::string::size_type pos = 0;
        while ((pos = line.find(s1, pos)) < line.length())
        {
            line.replace(pos, s1.length(), s2);
            pos += s2.length();
        }
        outputf << line << std::endl;
    }
    return 0;
}