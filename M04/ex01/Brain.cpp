/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 04:11:07 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/16 07:53:43 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    LastIdea = 0;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = nullptr;
    std::cout << "Brain Default Constructor Called" << std::endl;
}

Brain::Brain(const Brain& other){
    std::cout << "Brain Copy Constructor Called" << std::endl;
    *this = other;
}

Brain& Brain::operator=(const Brain& other){
    if (this == &other)
        return *this;
    this->LastIdea = other.LastIdea;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    return *this;
}

Brain::~Brain(){
    std::cout << "Brain Destructor Called" << std::endl;
}

std::string Brain::getIdea(int i){
    if (i >= 0 && i <= this->LastIdea){
        return (this->ideas[i]);
    }
    return (NULL);
}

void Brain::setIdea(const std::string idea) {
    if (this->LastIdea == 100)
        return ;
    this->ideas[LastIdea] = idea;
    LastIdea++;
}