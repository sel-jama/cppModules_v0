/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:11:50 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/13 07:36:19 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ScavTrap  child1;
    child1.attack("scav");
    child1.takeDamage(50);
    child1.beRepaired(100);

    std::cout << std::endl;
    FragTrap child2;
    child2.setName("Child");
    child2.attack("unknown");
    
    std::cout << std::endl;
    FragTrap named("random");
    named.attack("Frag");
    named.takeDamage(150);
    named.attack("weak");

    std::cout << std::endl;
    return 0;
}