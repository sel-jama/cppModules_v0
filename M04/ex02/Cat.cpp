/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 03:40:45 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/17 09:58:55 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(){
    std::cout << "Cat Default Constructor Called" << std::endl;
    this->setType("Cat");
    this->brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other){
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = other;
}

Cat& Cat::operator=(const Cat& other){
    std::cout << "Cat Copy assignment operator called" << std::endl;
    if (this == &other)
        return *this;
    this->brain = new Brain(*other.brain);
    return (*this);
}

Cat::~Cat(){
    delete this->brain;
    std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound() const{
    std::cout << " Meow meow ... " << std::endl;
}

Brain* Cat::getBrain(){
    return (this->brain);
}