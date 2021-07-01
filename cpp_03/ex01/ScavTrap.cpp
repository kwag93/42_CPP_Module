/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:30:52 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/25 11:47:04 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Create Scav :" << name << std::endl;
	this->name = name;
	this->hitPoint = 100;
	this->maxHitPoint = 100;
	this->energyPoint = 50;
	this->maxEnergyPoint = 50;
	this->level = 1;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->name << " GAME OVER" << std::endl;
}

void ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << this->name << " attacks "
	<< target << " at range, causing " << this->rangedAttackDamage
	<< " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << this->name << " attacks "
	<< target << " at melee, causing " << this->meleeAttackDamage
	<< " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	int damage;

	amount -= this->armorDamageReduction;
	if(this->hitPoint <= 0)
	{
		std::cout << this->name << " is already dead."<<std::endl;
		return ;
	}
	if(this->hitPoint < amount)
		damage = this->hitPoint;
	else
		damage = amount;
	this->hitPoint -= damage;
	std::cout << this->name << " is attacked! " << damage
	<< " points of damage!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if(this->hitPoint >= this->maxHitPoint)
	{
		std::cout << this->name << " is already full HP."<<std::endl;
		return ;
	}
	if (this->hitPoint < this->maxHitPoint)
	{
		if (this->hitPoint + amount > this->maxHitPoint)
			amount =  this->maxHitPoint - this->hitPoint;
		this->hitPoint += amount;
	}
	std::cout << this->name << " has Recovered by " << amount
	<< " points!" << std::endl;
}

void ScavTrap::challengeNewcomer()
{
	std::string dialogues[5] = {"Why So Serious!?", "I hope my death makes more cents than my life. ", "I haven't been happy one day out of my entire funcking life",
	"Can you turn off the light?", "That's the answer, alchemist."};

	std::cout << this->name << " : " << dialogues[rand() % 5] << std::endl;
}

