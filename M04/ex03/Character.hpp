/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 04:03:35 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/13 04:07:06 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP  
#define CHARAACTER_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
    public:
        ~ICharacter() {}
        std::string const & getName() const = 0;
        void equip(AMateria* m) = 0;
        void unequip(int idx) = 0;
        void use(int idx, ICharacter& target);
    
};

#endif