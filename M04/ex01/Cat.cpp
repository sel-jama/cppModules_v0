/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 03:40:45 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/16 07:40:15 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(){
    this->setType("Cat");
    this->brain = new Brain();
    std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other){
    *this = other;
    std::cout << "Cat Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other){
    if (this == &other)
        return *this;
    if (this->brain)
        delete this->brain;
    this->brain = new Brain(*other.brain);
    std::cout << "Cat Copy assignment operator called" << std::endl;
    return (*this);
}

Cat::~Cat(){
    if (this->brain)
        delete this->brain;
    std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound() const{
    std::cout << " Meow meow ... " << std::endl;
}

Brain* Cat::getBrain(){
    return (this->brain);
}