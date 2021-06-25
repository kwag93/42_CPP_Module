/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 10:34:59 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/25 14:35:25 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	std::cout << "Create Player :" << name << std::endl;
	this->name = name;
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
