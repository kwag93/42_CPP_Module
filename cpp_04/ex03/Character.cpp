/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 14:04:33 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/30 17:06:41 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name):name(name)
{
	for(int i=0;i<4;i++)
	{
		this->inventory[i] = nullptr;
	}
}

Character::~Character()
{
	for(int i=0;i<4;i++)
	{
		if(this->inventory[i] != nullptr)
		{
			delete this->inventory[i];
		}
	}
}

Character::Character(const Character &character)
{
	this->name = character.name;
	for (int i=0;i<4;i++)
	{
		if (!this->inventory[i])
			this->equip(character.inventory[i]->clone());
	}
}

Character &Character::operator=(Character const &character)
{
	this->name = character.name;
	for (int i=0;i<4;i++)
	{
		if (!this->inventory[i])
			this->inventory[i] = character.inventory[i]->clone();
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria* m)
{
	if (m == nullptr)
		return ;
	for (int i=0;i<4;i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			return;
		}
	}

}

void Character::unequip(int idx)
{
	if(idx < 0 || idx >= 4)
		return;
	if(this->inventory[idx])
	{
		this->inventory[idx] = nullptr;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if(idx < 0 || idx >= 4)
		return;
	if(this->inventory[idx])
	{
		this->inventory[idx]->use(target);
	}
}
