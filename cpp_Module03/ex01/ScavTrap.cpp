/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 01:18:52 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/10 01:57:00 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
    std::cout << "ScavTrap Default Constructor Called" << std::endl;
    HitPt = 100;
    EnergyPt = 50;
    AttackDmg = 20;
}

ScavTrap::ScavTrap(const std::string Name) : ClapTrap(Name) {
    name = Name;
    std::cout << "ScavTrap parameterized Constructor Called" << std::endl;
    HitPt = 100;
    EnergyPt = 50;
    AttackDmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other){
    std::cout << "ScavTrap Copy Constructor Called" << std::endl; 
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other){
    std::cout << "ScavTrap assignment operator Called" << std::endl;
    if (this != &other){
        name = other.name;
        HitPt = other.HitPt;
        EnergyPt = other.EnergyPt;
        AttackDmg = other.AttackDmg;
    }
    return *this;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap Destructor Called" << std::endl;
}

void ScavTrap::attack(const std::string& target){
    if (HitPt <= 0 || EnergyPt <= 0)
    {
        std::cout << "ScavTrap" << this->getName() << " is unable to attack !!" << std::endl;
        return ;
    }
    EnergyPt -= 1;
    std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << AttackDmg << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode" << std::endl;
}