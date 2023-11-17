/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 04:11:07 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/17 01:51:24 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain Default Constructor Called" << std::endl;
}

Brain::Brain(const Brain& other){
    std::cout << "Brain Copy Constructor Called" << std::endl;
    *this = other;
}

Brain& Brain::operator=(const Brain& other){
    std::cout << "Brain Copy assignment operator Called" << std::endl;
    if (this == &other)
        return *this;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    return *this;
}

Brain::~Brain(){
    std::cout << "Brain Destructor Called" << std::endl;
}

const std::string& Brain::getIdea(int idx) const{
    if (idx < 0 || idx > 100){
        static const std::string null = "Out of bounds";
        return null;
    }
   return (this->ideas[idx]);
}

void Brain::setIdea(int idx, const std::string idea) {
    if (idx < 0 || idx > 100)
        return ;
    this->ideas[idx] = idea;
}