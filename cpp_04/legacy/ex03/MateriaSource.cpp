/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 14:05:00 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/30 16:28:03 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): count(0)
{
	for(int i=0;i<4;i++)
	{
		this->sources[i] = nullptr;
	}
}

MateriaSource::~MateriaSource()
{
	for(int i=0; i<count; i++)
	{
		delete sources[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &materia)
{
	this->count = 0;
	for(int i = 0; i < materia.count; i++)
		this->learnMateria(materia.sources[i]->clone());
}

MateriaSource & MateriaSource::operator=(MateriaSource const &materia)
{
	this->count = 0;
	for(int i = 0; i < materia.count; i++)
		this->learnMateria(materia.sources[i]->clone());
	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (this->count  == 4 || materia == nullptr)
		return ;
	this->sources[this->count++] = materia;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for(int i=0; i<this->count; i++)
	{
		if(this->sources[i]->getType() == type)
		{
			return this->sources[i]->clone();
		}
	}
	return NULL;
}
