/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 03:40:45 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/10 03:59:27 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(){
    this->setType("Cat");
    std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other){
    this->setType(other.getType());
    std::cout << "Cat Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other){
    this->type = other.type;
    std::cout << "Cat Copy assignment operator called" << std::endl;
    return (*this);
}

Cat::~Cat(){
        std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound() const{
    std::cout << " Meow meow ... " << std::endl;
}