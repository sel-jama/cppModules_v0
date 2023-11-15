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

Cure::Cure() : AMateria("cure"){
}

Cure::Cure(const Cure& other) : AMateria("cure"){
    *this = other;
}

Cure& Cure::operator=(const Cure& other){
    if (this != &other)
        this->type = other.type;
    return *this;
}

Cure::~Cure(){}

void Cure::use(ICharacter& target){
    std::cout << "*heals " << target.getName()<< "'s wounds *"<< std::endl;
}

AMateria* Cure::clone() const{
    return new Cure();
}

