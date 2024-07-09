/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 04:29:12 by sel-jama          #+#    #+#             */
/*   Updated: 2023/10/27 04:29:15 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int ac, char **av)
{
    if (ac == 4) {
        std::string filename = av[1];
        std::string s1 = av[2];
        std::string s2 = av[3];

        if (replace(filename, s1, s2))
            return 1;
        std::cout << "File has been replaced successfully!!" << std::endl;

    }
    else
        std::cout << "Three parameters only" << std::endl;
    return 0;
}