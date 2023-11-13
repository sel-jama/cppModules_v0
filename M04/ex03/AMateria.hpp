/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 05:27:21 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/10 05:53:42 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>

class AMateria
{
    protected:
        std::string type;

    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria& other);
        AMateria& operator=(const AMateria& other);
        ~AMateria();
        
        std::string const & getType() const; //Returns the materia type
        
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif