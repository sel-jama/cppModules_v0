/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 05:52:15 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/16 03:03:54 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
}

Cure::Cure(const Cure& other) : AMateria(other.type){
    // *this = other;
    (void)other;
}

Cure& Cure::operator=(const Cure& other){
    (void)other;
    return *this;
}

Cure::~Cure(){}

void Cure::use(ICharacter& target){
    std::cout << "*heals " << target.getName()<< "'s wounds *"<< std::endl;
}

AMateria* Cure::clone() const{
    return new Cure(*this);
}

