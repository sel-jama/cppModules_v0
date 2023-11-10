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

FragTrap::FragTrap(){
    HitPt = 100;
    EnergyPt = 100;
    AttackDmg = 30;
    std::cout << "FragTrap Default Constructor Called" << std::endl;
}

FragTrap::FragTrap(const std::string Name){
    name = Name;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap Destructor Called" << std::endl;
}

void FragTrap::attack(const std::string& target){
        std::cout << "FragTrap " << name << " attacks " << target << ", causing " << AttackDmg << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void){
    std::cout << "High Five Guuuys" << std::endl;
}