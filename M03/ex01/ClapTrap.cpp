/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 23:41:37 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/09 00:35:20 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():HitPt(10), EnergyPt(10), AttackDmg(0){
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name):name(Name){}

ClapTrap::ClapTrap(const ClapTrap& other){
    name = other.name;
    HitPt = other.HitPt;
    EnergyPt = other.EnergyPt;
    AttackDmg = other.AttackDmg;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
    if (this == &other)
        return *this;
    
    name = other.name;
    HitPt = other.HitPt;
    EnergyPt = other.EnergyPt;
    AttackDmg = other.AttackDmg;
    return *this;
}

void ClapTrap::attack(const std::string& target){
    HitPt -= AttackDmg;
    EnergyPt -= 1;
    std::cout << "ClapTrap" << name << "attacks" << target << ", causing" << AttackDmg << "points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    HitPt += amount;
    EnergyPt -= 1;
}

void ClapTrap::takeDamage(unsigned int amount){
    ++AttackDmg;
}


ClapTrap::~ClapTrap(){
    std::cout << "Destructor called" << std::endl;
}

