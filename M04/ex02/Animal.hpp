/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 03:22:16 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/16 07:02:18 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
    protected:
        std::string type;
        
    public:
        Animal();
        virtual void makeSound() const = 0;
        const std::string& getType(void) const;
        void setType(const std::string& type);
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        virtual ~Animal();
};

#endif