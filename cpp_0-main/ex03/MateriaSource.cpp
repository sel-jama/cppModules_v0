/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:31:58 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/13 12:31:59 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : last(0)
{
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	*this = other; // Overloaded =
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < last; i++)
		delete this->materias[i];
}

MateriaSource&		MateriaSource::operator=(const MateriaSource& other)
{
	this->last = other.last;
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
		this->materias[i] = other.materias[i];
	}
	return (*this);
}

void				MateriaSource::learnMateria(AMateria *m)
{
	if (this->last >= 4)
		std::cout << "Can't learn any more materias" << std::endl;
	else
	{
		this->materias[last] = m;
		last++;
	}
}

AMateria			*MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < 4 && this->materias[i]; i++)
	{
		if (type == this->materias[i]->getType())
			return this->materias[i]->clone();
	}
	return NULL;
}