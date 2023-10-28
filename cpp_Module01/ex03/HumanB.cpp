/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 04:28:27 by sel-jama          #+#    #+#             */
/*   Updated: 2023/10/27 04:28:28 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string name) : name(name){}

void HumanB::setWeapon(const Weapon& weapon) {
    this->weapon = &weapon;
}

void HumanB::attack() const {
    std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}