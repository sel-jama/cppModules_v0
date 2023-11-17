/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 03:29:38 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/17 09:32:12 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(){
    this->setType("Dog");
    std::cout << "Dog Default Constructor is Called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    this->setType(other.getType());
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other){
    this->type = other.type;
    std::cout << "Dog Copy assignment operator called" << std::endl;
    return (*this);
}

void Dog::makeSound() const{
    std::cout << " Haw haw ..." << std::endl;
}

Dog::~Dog(){
    std::cout << "Dog Destructor is Called" << std::endl;
}