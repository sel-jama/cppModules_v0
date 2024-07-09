/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 03:24:12 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/16 22:57:27 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type(""){
	std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::Animal(const Animal& other){
	std::cout << "Animal Copy Constructor Called" << std::endl;
	*this = other;
}

Animal::~Animal(){
	std::cout << "Animal Destructor Called" << std::endl;
}

Animal& Animal::operator=(const Animal& other){
	std::cout << "Animal Copy assignment operator called" << std::endl;
    if (this != &other)
	    this->type = other.getType();

	return (*this);
}

const std::string&	Animal::getType() const{
	return (this->type);
}

void  Animal::setType(const std::string& type){
	this->type = type;
}

void    Animal::makeSound() const
{
	std::cout << " Animal Sound ..." << std::endl;
}
