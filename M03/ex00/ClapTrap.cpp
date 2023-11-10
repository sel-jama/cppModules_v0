/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 23:41:37 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/10 01:22:50 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():HitPt(10), EnergyPt(10), AttackDmg(0){
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string Name):name(Name){}

ClapTrap::ClapTrap(const ClapTrap& other){
    // name = other.name;
    // HitPt = other.HitPt;
    // EnergyPt = other.EnergyPt;
    // AttackDmg = other.AttackDmg;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
    if (this == &other)
        return *this;
    
    // name = other.name;
    // HitPt = other.HitPt;
    // EnergyPt = other.EnergyPt;
    // AttackDmg = other.AttackDmg;
    *this = other;
    return *this;
}

void ClapTrap::attack(const std::string& target){
    if (HitPt <= 0 || EnergyPt <= 0)
        return ;
    takeDamage(HitPt);
    HitPt -= AttackDmg;
    EnergyPt -= 1;
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << AttackDmg << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (HitPt <= 0 || EnergyPt <= 0)
        return ;
    HitPt += amount;
    EnergyPt -= 1;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (HitPt <= 0 || EnergyPt <= 0)
        return ;
    ++AttackDmg;
    beRepaired(amount);
}


ClapTrap::~ClapTrap(){
    std::cout << "Destructor called" << std::endl;
}

