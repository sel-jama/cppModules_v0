/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:45:56 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/18 08:01:01 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal(){
    std::cout << "Wrong Cat Default Constructor Called" << std::endl;
    this->setType("WrongCat");
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other){
    std::cout << "Wrong Cat Copy constructor called" << std::endl;
    this->setType(other.getType());
}

WrongCat& WrongCat::operator=(const WrongCat& other){
    std::cout << "Wrong Cat Copy assignment operator called" << std::endl;
    this->type = other.type;
    return (*this);
}

WrongCat::~WrongCat(){
        std::cout << "Wrong Cat Destructor Called" << std::endl;
}

void WrongCat::makeSound() const{
    std::cout << " Meow meow ... " << std::endl;
}