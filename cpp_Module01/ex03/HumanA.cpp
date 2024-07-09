/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 04:28:18 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/01 08:53:05 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string name, const Weapon& weapon):name(name), weapon(weapon){}

void HumanA::attack() const
{
    std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}