/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 03:29:38 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/18 06:54:10 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(){
    std::cout << "Dog Default Constructor is Called" << std::endl;
    this->setType("Dog");
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog Copy constructor called" << std::endl;
    this->setType(other.getType());
}

Dog& Dog::operator=(const Dog& other){
    std::cout << "Dog Copy assignment operator called" << std::endl;
    this->type = other.type;
    return (*this);
}

void Dog::makeSound() const{
    std::cout << " Haw haw ..." << std::endl;
}

Dog::~Dog(){
    std::cout << "Dog Destructor is Called" << std::endl;
}