/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jama <sel-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:31:58 by sel-jama          #+#    #+#             */
/*   Updated: 2023/11/18 13:02:19 by sel-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	last = 0;
	for (int i = 0; i < 4; i++)
		this->_MateriaSrc[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other){
	*this = other;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_MateriaSrc[i])
		{
			delete this->_MateriaSrc[i];
			this->_MateriaSrc[i] = NULL;
		}
	}
}

MateriaSource&		MateriaSource::operator=(const MateriaSource& other)
{
	if (this == &other)
		return *this;
	
	this->last = other.last;
	for (int i = 0; i < 4; i++)
	{
		if (this->_MateriaSrc[i])
			delete this->_MateriaSrc[i];
		if (other._MateriaSrc[i])
			this->_MateriaSrc[i] = other._MateriaSrc[i]->clone();
		else
			this->_MateriaSrc[i] = NULL;
	}
	return (*this);
}

void				MateriaSource::learnMateria(AMateria *m)
{
	if (this->last >= 4)
	{
		std::cout << "The MateriaSource can't learn more Materias" << std::endl;
		delete m;
		return ;
	}
	
	this->_MateriaSrc[this->last] = m;
	this->last++;
}

AMateria			*MateriaSource::createMateria(const std::string& type)
{
	int i = 0;
	while( i < 4 && this->_MateriaSrc[i])
	{
		if (type == this->_MateriaSrc[i]->getType())
			return this->_MateriaSrc[i]->clone();
		i++;
	}
	return 0;
}