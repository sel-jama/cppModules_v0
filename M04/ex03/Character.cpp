/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 05:13:49 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/16 06:51:44 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
    _last = 0;
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
    
    for (int i = 0; i < 4; i++)
        saver[i] = NULL;
}

Character::Character(const std::string& name) : _name(name){
    _last = 0;
     for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
    
    for (int i = 0; i < 4; i++)
        saver[i] = NULL;
}

Character::Character(const Character& other) : ICharacter(other){
    *this = other;
}

Character& Character::operator=(const Character& other){
    if (this != &other)
    {
        this->_name = other._name;
        this->_last = other._last;
        for (int i = 0; i < 4; i++){
            if (this->_inventory[i])
                delete this->_inventory[i];
            this->_inventory[i] = other._inventory[i];
        }
    }
    return *this;
}

Character::~Character(){
    for (int i = 0; i < 4 && _inventory[i]; i++)
        delete this->_inventory[i];
}

std::string const& Character::getName() const{
    return (this->_name);
}

void Character::equip(AMateria* m){
    int i;
    for (i = 0; i < 4; i++){
        if (!this->_inventory[i])
            break ;
    }
    this->_last = i;
    if (this->_last >= 4)
        return ;
    this->_inventory[this->_last] = m;
    this->_last += 1;
    // if (this->saver[i])
    //     delete this->saver[i];
    // this->_inventory[i] = m;
    
}

void Character::unequip(int idx){
    if (idx < 0 || idx >= 4 || !_inventory[idx])
        return ;
    saver[idx] = _inventory[idx];
    _inventory[idx] = NULL;
    // this->_last--;
}


void Character::use(int idx, ICharacter& target){
    if (idx < 0 || idx >= 4 || !_inventory[idx])
        return ;
    this->_inventory[idx]->use(target);
}
