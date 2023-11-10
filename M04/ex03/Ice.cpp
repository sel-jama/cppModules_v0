/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 05:57:46 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/10 05:59:13 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(){
    type = "ice";
}

void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at " << target.name << " *" << std::endl;
}

Ice::~Ice(){}