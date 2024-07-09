/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 05:32:05 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/17 10:25:34 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){}

AMateria::AMateria(std::string const& type) : type(type){}


AMateria::AMateria(const AMateria& other): type(other.type){
    (void)other;
}

AMateria& AMateria::operator=(const AMateria& other){
    (void)other;
    return *this;
}

AMateria::~AMateria(){}

std::string const& AMateria::getType() const{
    return (this->type);
}

void AMateria::use(ICharacter& target){
    std::cout << "Materia of " << target.getName() << std::endl;
}