/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 05:13:49 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/13 07:04:07 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){}

Character::Character(const std::string& name):_name(name){}

Character::Character(const Character& other){
    *this = other;
}

Character& Character::operator=(const Character& other){
}