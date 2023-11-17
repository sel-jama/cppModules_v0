/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:45:56 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/16 22:56:33 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal(){
    this->setType("WrongCat");
    std::cout << "Wrong Cat Default Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other){
    this->setType(other.getType());
    std::cout << "Wrong Cat Copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other){
    this->type = other.type;
    std::cout << "Wrong Cat Copy assignment operator called" << std::endl;
    return (*this);
}

WrongCat::~WrongCat(){
        std::cout << "Wrong Cat Destructor Called" << std::endl;
}

void WrongCat::makeSound() const{
    std::cout << " Meow meow ... " << std::endl;
}