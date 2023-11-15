/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 05:32:05 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/10 05:54:08 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){}

AMateria::AMateria(std::string const& type):type(type){}

std::string const& AMateria::getType() const{
    return (this->type);
}

AMateria::AMateria(const AMateria& other){
    *this = other;
}

AMateria& AMateria::operator=(const AMateria& other){
    if (this != &other)
        this->type = other.getType();
    
    return *this;
}

AMateria::~AMateria(){}
