/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 10:34:59 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/25 11:29:51 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	std::cout << "Create Player :" << name << std::endl;
	this->name = name;
	this->hitPoint = 100;
	this->maxHitPoint = 100;
	this->energyPoint = 100;
	this->maxEnergyPoint = 100;
	this->level = 1;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 30;
	this->armorDamageReduction = 5;
}

FragTrap::~FragTrap()
{
	std::cout << this->name << " GAME OVER" << std::endl;
}

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks "
	<< target << " at range, causing " << this->rangedAttackDamage
	<< " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks "
	<< target << " at melee, causing " << this->meleeAttackDamage
	<< " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	int damage;

	amount -= this->armorDamageReduction;
	if(this->hitPoint <= 0)
	{
		std::cout << "FR4G-TP " << this->name << " is already dead."<<std::endl;
		return ;
	}
	if(this->hitPoint < amount)
		damage = this->hitPoint;
	else
		damage = amount;
	this->hitPoint -= damage;
	std::cout << "FR4G-TP " << this->name << " is attacked! " << damage
	<< " points of damage!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if(this->hitPoint >= this->maxHitPoint)
	{
		std::cout << "FR4G-TP " << this->name << " is already full HP."<<std::endl;
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

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string dialogues[5] = {"Fire in the hole! ", "Succeeding You, father. ", "Nurf this! ", "I can do this all day. ", "I love you 3000. "};

	if (this->energyPoint >= 25)
	{
		this->energyPoint -= 25;
		std::cout << this->name << ": " << dialogues[rand() % 5] << std::endl;
		std::cout << this->rangedAttackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "Not enough energy" << std::endl;
}
