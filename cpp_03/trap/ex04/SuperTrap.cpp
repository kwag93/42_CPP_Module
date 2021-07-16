/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 14:40:24 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/25 14:53:26 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name):ClapTrap(name), NinjaTrap(name), FragTrap(name)
{
	std::cout << "Create Super :" << name << std::endl;
	this->level = 1;
	this->hitPoint = this->FragTrap::hitPoint;
	this->maxHitPoint = this->FragTrap::maxHitPoint;
	this->energyPoint = this->NinjaTrap::energyPoint;
	this->maxEnergyPoint = this->NinjaTrap::maxEnergyPoint;
	this->meleeAttackDamage = this->NinjaTrap::meleeAttackDamage;
	this->rangedAttackDamage = this->FragTrap::rangedAttackDamage;
	this->armorDamageReduction = this->FragTrap::armorDamageReduction;
}

SuperTrap::~SuperTrap()
{
	std::cout << "Destory Super : " << this->name << std::endl;
}

void SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}
