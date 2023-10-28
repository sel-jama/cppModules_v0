/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 04:29:18 by sel-jama          #+#    #+#             */
/*   Updated: 2023/10/28 01:04:21 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int replace(std::string filename, std::string s1, std::string s2)
{
    std::string replacef;
    std::ifstream inputf(filename); 
    if (!inputf)
    {
        std::cout << "Error reading from file" << std::endl;
        return 1;
    }
    replacef = filename + ".replace";
    std::ofstream outputf(replacef);
    if (!outputf)
    {
        std::cout << "Error writing to file" << std::endl;
        return 1;
    }

    std::string line;
    while (getline(inputf ,line))
    {
        std::string::size_type pos = 0;
        while ((pos = line.find(s1, pos)) < line.length())
        {
            // line.replace(pos, s1.length(), s2); // forbidden 
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        outputf << line << std::endl;
    }
    return 0;
}