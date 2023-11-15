/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:32:53 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/14 20:28:42 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
    private:
        AMateria* _MateriaSrc[4];
        int last;
    
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& other);
		~MateriaSource();
		MateriaSource		&operator=(const MateriaSource& other);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif
