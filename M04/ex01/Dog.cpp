/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 03:29:38 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/17 01:42:31 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(){
    std::cout << "Dog Default Constructor is Called" << std::endl;
    this->setType("Dog");
    this->brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog Copy constructor called" << std::endl;
    *this = other;
}

Dog& Dog::operator=(const Dog& other){
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if (this == &other)
        return *this;
    this->brain = new Brain(*other.brain); 
    return (*this);
}

void Dog::makeSound() const{
    std::cout << " Haw haw ..." << std::endl;
}

Dog::~Dog(){
    delete this->brain;
    std::cout << "Dog Destructor is Called" << std::endl;
}

Brain* Dog::getBrain(){
    return (this->brain);
}
