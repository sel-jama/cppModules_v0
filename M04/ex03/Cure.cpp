/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 05:52:15 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/10 06:00:07 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(){
    type = "cure";
}

Cure::~Cure(){}

void Cure::use(ICharacter& target){
    std::cout << "heals " << target.name << "'s wounds *"<< std::endl;
}

