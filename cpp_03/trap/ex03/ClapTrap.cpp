/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:49:37 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/25 14:35:18 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitPoint = 50;
	this->maxHitPoint = 50;
	std::cout << this->name << " will be created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name << " will be dead" << std::endl;
}

void ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "Claptrap " << this->name << " attacks "
	<< target << " at range, causing " << this->rangedAttackDamage
	<< " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "Claptrap " << this->name << " attacks "
	<< target << " at melee, causing " << this->meleeAttackDamage
	<< " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
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
	std::cout <<  this->name << " is attacked! " << damage
	<< " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
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
