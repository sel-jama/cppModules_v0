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

Cat::Cat(){
    type = "Cat";
    std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::~Cat(){
        std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "meow meow ..." << std::endl;
}