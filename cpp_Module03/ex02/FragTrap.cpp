/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:33:55 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/10 01:59:59 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
    std::cout << "FragTrap Default Constructor Called" << std::endl;
    HitPt = 100;
    EnergyPt = 100;
    AttackDmg = 30;
}

FragTrap::FragTrap(const std::string Name) : ClapTrap(Name) {
    std::cout << "FragTrap Parameterized Constructor Called" << std::endl;
    name = Name;
    HitPt = 100;
    EnergyPt = 100;
    AttackDmg = 30;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap Destructor Called" << std::endl;
}

void FragTrap::attack(const std::string& target){
    if (this->HitPt <= 0 || this->EnergyPt <= 0)
    {
        std::cout << "FragTrap " << this->getName() << " is unable to attack" << std::endl;
        return ;
    }
    this->EnergyPt -= 1;
    std::cout << "FragTrap " << this->getName() << " attacks " << target << ", causing " << AttackDmg << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void){
    std::cout << "FragTrap " << this->getName()  << " : High Five Guuuys" << std::endl;
}