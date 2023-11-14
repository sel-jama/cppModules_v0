/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 04:03:35 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/14 21:07:30 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP  
#define CHARAACTER_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria* _inventory[4];
        
    public:
        Character();
        Character(const std::string& name);
        Character(const Character& other); //deep copy
        Character& operator=(const Character& other); //deep copy
        ~Character();
        
        // ~ICharacter() {}
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
    
};

#endif