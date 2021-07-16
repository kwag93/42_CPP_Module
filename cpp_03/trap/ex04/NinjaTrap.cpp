/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 14:07:02 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/25 14:34:17 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name):ClapTrap(name)
{
	std::cout << "Create Ninja :" << name << std::endl;
	this->hitPoint = 60;
	this->maxHitPoint = 60;
	this->energyPoint = 120;
	this->maxEnergyPoint = 120;
	this->level = 1;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << this->name << " is dissapeared" << std::endl;
}

void NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << " threw a Shuriken at "
	<< target << " and damage " << this->rangedAttackDamage
	<< " points of damage!" << std::endl;
}

void NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name << " attacks "
	<< target << " with a dagger. " << this->meleeAttackDamage
	<< " points of damage!" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
	std::cout << this->name << " tries to double attack!"<<std::endl;
	this->meleeAttack(trap.name);
	trap.takeDamage(this->meleeAttackDamage);
	this->rangedAttack(trap.name);
	trap.takeDamage(this->rangedAttackDamage);
}

void NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	std::cout << this->name << " tries to melee attack!"<<std::endl;
	this->meleeAttack(trap.name);
	trap.takeDamage(this->meleeAttackDamage);
}

void NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	std::cout << this->name << " tries to range attack!"<<std::endl;
	this->rangedAttack(trap.name);
	trap.takeDamage(this->rangedAttackDamage);
}

void NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	std::cout << this->name << " meets a colleague." <<std::endl;
	this->beRepaired(10);
	trap.beRepaired(10);
}
