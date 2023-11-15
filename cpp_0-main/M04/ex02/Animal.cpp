/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 03:24:12 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/10 04:52:45 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::~Animal(){
    std::cout << "Animal Destructor Called" << std::endl;
}

const std::string Animal::getType(void) const{
    return (this->type);
}