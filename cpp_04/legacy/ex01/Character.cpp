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

Character::Character()
{
	this->name = "";
	this->ap = 0;
	this->weapon = NULL;
}

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
	this->name = charac.getName();
	this->ap = charac.getAP();
	this->weapon = charac.getWeapon();
}

Character &Character::operator=(const Character& charac)
{
	this->name = charac.getName();
	this->ap = charac.getAP();
	this->weapon = charac.getWeapon();
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
	if (!character.getWeapon())
	{
		out << character.getName() << " has " << character.getAP() << " AP and is unarmed" << std::endl;
	}
	else
		out << character.getName() << " has " << character.getAP() << " AP and wields a " << character.getWeapon()->getName() << std::endl;
	return out;
}

int	Character::getAP() const
{
	return this->ap;
}

AWeapon *Character::getWeapon() const
{
	return this->weapon;
}
