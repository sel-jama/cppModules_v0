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
    std::cout << "ClapTrap Default constructor called " << std::endl;
}

ClapTrap::ClapTrap(const std::string Name):name(Name){
    std::cout << "ClapTrap parameterized constructor called" << std::endl;
    HitPt = 10;
    EnergyPt = 10;
    AttackDmg = 0;
}

ClapTrap::ClapTrap(const ClapTrap& other){
    std::cout << "ClapTrap Copy Constructor Called" << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
    std::cout << "ClapTrap Copy assignment operator called " << std::endl;
    if (this != &other)
    {
        this->name = other.name;
        this->HitPt = other.HitPt;
        this->EnergyPt = other.EnergyPt;
        this->AttackDmg = other.AttackDmg;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target){
    if (HitPt <= 0 || EnergyPt <= 0)
    {
        std::cout << "ClapTrap " << this->getName() << " is unable to attack, No points left!" << std::endl;
        return ;
    }
    EnergyPt -= 1;
    std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << AttackDmg << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (HitPt <= 0 || EnergyPt <= 0)
    {
        std::cout << "ClapTrap " << this->getName() << " is unable to be repaired" << std::endl;
        return ;
    }
    std::cout << "Repairs initiated! ClapTrap's health improved by " << amount << std::endl;
    HitPt += amount;
    EnergyPt -= 1;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (HitPt <= 0 || EnergyPt <= 0)
    {
        std::cout << "ClapTrap can not handle damage anymore!" << std::endl;
        return ;
    }
    std::cout << "Damage inflicted! ClapTrap's health reduced by "<< amount  << std::endl;
    if (amount > (unsigned int)HitPt)
        HitPt = 0;
    else
        HitPt -= amount;
    // AttackDmg = amount;
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

