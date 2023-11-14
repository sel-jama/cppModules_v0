/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 03:29:38 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/10 03:53:49 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    type = "Dog";
    std::cout << "Dog Default Constructor is Called" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "haw haw" << std::endl;
}

Dog::~Dog(){
    std::cout << "Dog Destructor is Called" << std::endl;
}