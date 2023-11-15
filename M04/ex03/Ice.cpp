/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 05:57:46 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/10 05:59:13 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
}

Ice::Ice(const Ice& other) : AMateria("ice"){
    *this = other;
}

Ice& Ice::operator=(const Ice& other){
    if (this != &other)
        this->type = other.type;
    return *this;
}

void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const{
    return new Ice();
}

Ice::~Ice(){}