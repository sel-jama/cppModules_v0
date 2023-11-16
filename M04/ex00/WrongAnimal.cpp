/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:38:07 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/16 22:55:17 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type(""){
	std::cout << "WrongAnimal Default Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other){
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
	*this = other;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal Destructor Called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){
    std::cout << "WrongAnimal Copy Assignment Operator Called" << std::endl;
    if (this != &other)
	    this->type = other.getType();

	return (*this);
}

const std::string&	WrongAnimal::getType() const{
	return (this->type);
}

void  WrongAnimal::setType(const std::string& type){
	this->type = type;
}

void    WrongAnimal::makeSound() const
{
	std::cout << "Wrong Animal Sound ..." << std::endl;
}