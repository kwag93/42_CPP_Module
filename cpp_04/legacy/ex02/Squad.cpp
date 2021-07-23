/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 16:36:56 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/08 14:57:15 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
	this->count = 0;
	this->array = nullptr;
}

Squad::~Squad()
{
	for(int i=0; i<this->count; i++)
	{
		delete this->array[i];
	}
	if(this->array)
		delete[] this->array;
}

Squad::Squad(const Squad &squad)
{
	this->count = 0;
	for(int i = 0; i<this->count; i++)
	{
		this->push(squad.getUnit(i)->clone());
	}
}

Squad &Squad::operator=(Squad const &squad)
{
	if (this->count > 0)
	{
		for (int i=0; i<this->count; i++)
		{
			delete this->array[i];
		}
		this->count = 0;
		delete[] this->array;
	}
	this->count = 0;
	this->array = (ISpaceMarine **)malloc(sizeof(ISpaceMarine *) * (this->count + 1));
	for(int i = 0; i<this->count; i++)
	{
		this->push(squad.getUnit(i)->clone());
	}
	return (*this);
}

int Squad::getCount() const
{
	return this->count;
}

ISpaceMarine* Squad::getUnit(int index) const
{
	if(this->count == 0 || index >= this->count || index < 0)
		return nullptr;
	return this->array[index];
}

int Squad::push(ISpaceMarine *unit)
{
	if(!unit)
		return this->count;
	for(int i = 0; i<this->count; i++)
	{
		if(this->array[i] == unit)
		{
			return this->count;
		}
	}
	if(this->array)
	{
		ISpaceMarine **cpy = new ISpaceMarine*[this->count + 1];
		for (int i = 0; i < this->count; i++)
			cpy[i] = this->array[i];
		delete[] this->array;
		this->array = cpy;
	}
	else
	{
		this->array = new ISpaceMarine*[this->count + 1];
	}
	this->array[(this->count)++] = unit;
	return this->count;
}
