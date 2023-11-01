/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 04:29:18 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/01 09:58:59 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

// int replace(std::string filename, std::string s1, std::string s2)
// {
//     std::string replacef;
//     std::ifstream inputf(filename); 
//     if (!inputf)
//     {
//         std::cout << "Error reading from file" << std::endl;
//         return 1;
//     }
//     replacef = filename + ".replace";
//     std::ofstream outputf(replacef);
//     if (!outputf)
//     {
//         std::cout << "Error writing to file" << std::endl;
//         return 1;
//     }

//     std::string line;
//     while (getline(inputf ,line, '\n'))
//     {
//         std::string::size_type pos = 0;
//         while ((pos = line.find(s1, pos)) < line.length())
//         {
//             line.erase(pos, s1.length());
//             line.insert(pos, s2);
//             pos += s2.length();
//         }
//         outputf << line << std::endl;
//     }
//     return 0;
// }

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int replace(std::string& filename, std::string& s1, std::string& s2){
    std::ifstream inputf(filename);
    if (!inputf) {
        std::cerr << "Error opening input file: " << filename << std::endl;
        return 1;
    }

    std::string replacef = filename + ".replace";
    std::ofstream outputf(replacef);
    if (!outputf) {
        std::cerr << "Error opening output file: " << replacef << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(inputf, line)) {
        // std::size_t pos = 0;
        std::string::size_type pos = 0;
        while ((pos = line.find(s1, pos)) < line.length())
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        outputf << line;
        outputf << line << '\n';
    }

    // Close the files
    inputf.close();
    outputf.close();

    return 0;
}
