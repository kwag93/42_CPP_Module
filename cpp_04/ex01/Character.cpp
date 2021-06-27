/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 11:12:55 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/27 12:36:474 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name)
{
	this->name = name;
	this->ap = 40;
}

Character::~Character()
{

}

Character::Character(const Character & charac)
{
	this->ap = charac.ap;
	this->name = charac.name;
	this->weapon = charac.weapon;
}

Character &Character::operator=(const Character& charac)
{
	this->name = charac.name;
	this->ap = charac.ap;
	this->weapon = charac.weapon;
	return *this;
}


void Character::recoverAP()
{
	int realAp=10;

	if(this->ap >= 40)
		return;
	if(40 - this->ap < 10)
		realAp = 40 - this->ap;
	this->ap += realAp;
}

void Character::equip(AWeapon* weapon)
{
	this->weapon = weapon;
}

void Character::attack(Enemy* enemy)
{
	if(weapon == nullptr && this->ap < this->weapon->getAPCost())
		return;
	std::cout << this->name << " attacks " << enemy->getType() << " with a " << this->weapon->getName() << std::endl;
	this->weapon->attack();
	enemy->takeDamage(this->weapon->getDamage());
	this->ap -= this->weapon->getAPCost();
	if(enemy->getHP() <= 0)
		delete enemy;
}

std::string Character::getName() const
{
	return this->name;
}

std::ostream &operator<<(std::ostream &out, Character const &character)
{
	if (!character.weapon)
	{
		out << character.name << " has " << character.ap << " AP and is unarmed" << std::endl;
	}
	else
		out << character.name << " has " << character.ap << " AP and wields a " << character.weapon->getName() << std::endl;
	return out;
}
