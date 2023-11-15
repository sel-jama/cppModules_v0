/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:11:50 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/10 02:02:03 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap  child;
  
    child.attack("target");
    child.takeDamage(100);
    child.attack("someone");
    
    std::cout << std::endl;
    ScavTrap  name("Serena");
    name.attack("another");
    name.takeDamage(50);
    name.beRepaired(20);
    name.guardGate();
    std::cout << std::endl;
    return 0;
}