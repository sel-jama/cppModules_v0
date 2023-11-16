/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 03:29:38 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/16 07:04:06 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(){
    this->setType("Dog");
    this->brain = new Brain();
    std::cout << "Dog Default Constructor is Called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    *this = other;
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other){
    if (this == &other)
        return *this;
    if (this->brain)
        delete this->brain;
    this->brain = new Brain(*other.brain); 
    std::cout << "Dog Copy assignment operator called" << std::endl;
    return (*this);
}

void Dog::makeSound() const{
    std::cout << " Haw haw ..." << std::endl;
}

Dog::~Dog(){
    if (this->brain)
        delete this->brain;
    std::cout << "Dog Destructor is Called" << std::endl;
}
