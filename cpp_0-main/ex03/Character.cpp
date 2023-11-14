/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 05:13:49 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/14 21:05:34 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::Character(const std::string& name):_name(name){}

Character::Character(const Character& other){
    *this = other;
}

Character& Character::operator=(const Character& other){
    if (this != &other)
    {
        this->_name = other._name;
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
        delete _inventory[i];
}

std::string const& getName() const{
    return (this->_name);
}

void Character::equip(AMateria* m){
    for (int i = 0; i < 4; i++){
        if (!_inventory[i])
            _inventory[i] = new m;
    }
}

void Character::unequip(int idx){
    //memory leak here (losing address)
    if (_inventory[idx])
        inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target){
    if (!_inventory[idx])
        return ;
    use(target);
}
