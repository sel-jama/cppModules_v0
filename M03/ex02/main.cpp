/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:11:50 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/10 01:59:30 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ScavTrap  child;
    child.attack("scav");
    
    ScavTrap  name("robot");
    name.attack("another");

    std::cout << std::endl;
    FragTrap child2;
    child2.attack("frag");
    
    FragTrap named("random");
    named.attack("Frag");
    std::cout << std::endl;
    return 0;
}