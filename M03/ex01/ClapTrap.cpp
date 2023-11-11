/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 23:41:37 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/10 01:54:01 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():HitPt(10), EnergyPt(10), AttackDmg(0){
    std::cout << "ClapTrap Default constructor called ." << std::endl;
}

ClapTrap::ClapTrap(const std::string Name):name(Name){
    HitPt = 10;
    EnergyPt = 10;
    AttackDmg = 0;
}

ClapTrap::ClapTrap(const ClapTrap& other){
    std::cout << "ClapTrap Copy Constructor Called ." << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
    std::cout << "ClapTrap Copy assignment operator called ." << std::endl;
    if (this != &other)
    {
        name = other.name;
        HitPt = other.HitPt;
        EnergyPt = other.EnergyPt;
        AttackDmg = other.AttackDmg;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target){
    if (HitPt <= 0 || EnergyPt <= 0)
    {
        std::cout << "ClapTrap" << this->getName() << "can not attack" << std::endl;
        return ;
    }
    EnergyPt -= 1;
    std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << AttackDmg << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (HitPt <= 0 || EnergyPt <= 0)
    {
        std::cout << "ClapTrap" << this->getName() << "can not be repaired" << std::endl;
        return ;
    }
    HitPt += amount;
    EnergyPt -= 1;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (HitPt <= 0 || EnergyPt <= 0)
    {
        std::cout << "ClapTrap can not handle damage anymore" << std::endl;
        return ;
    }
    HitPt -= amount;
    AttackDmg += amount;
}


const std::string& ClapTrap::getName() const{
    return (this->name);
}

void ClapTrap::setName(const std::string Name){
    this->name = Name;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap Destructor called" << std::endl;
}


