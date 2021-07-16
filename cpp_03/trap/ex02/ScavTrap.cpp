/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:30:52 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/25 12:18:41 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	std::cout << "Create Scav :" << name << std::endl;
	this->hitPoint = 100;
	this->maxHitPoint = 100;
	this->level = 1;
	this->energyPoint = 50;
	this->maxEnergyPoint = 50;
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

void ScavTrap::challengeNewcomer()
{
	std::string dialogues[5] = {"Why So Serious!?", "I hope my death makes more cents than my life. ", "I haven't been happy one day out of my entire fucking life",
	"Can you turn off the light?", "That's the answer, alchemist."};

	std::cout << this->name << " : " << dialogues[rand() % 5] << std::endl;
}


