/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 04:27:19 by sel-jama          #+#    #+#             */
/*   Updated: 2023/10/28 09:56:06 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string Name):name(Name){
}

Zombie::~Zombie(){}

void Zombie::announce(void)
{
    std::cout << name << ":BraiiiiiiinnnzzzZ..." << std::endl; 
}