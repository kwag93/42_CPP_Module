/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 15:20:32 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/16 20:42:38 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	this->name = name;
	this->HitPoint = this->FragTrap::HitPoint;
	this->EnergyPoint = this->ScavTrap::EnergyPoint;
	this->AttackDamage = this->FragTrap::AttackDamage;
	std::cout << "DiamondTrap "<< this->name << " is born" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& const copy):ClapTrap(copy.name)
{
	this->name = copy.name;
	this->HitPoint = copy.HitPoint;
	this->EnergyPoint = copy.EnergyPoint;
	this->AttackDamage = copy.AttackDamage;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap& const copy):ClapTrap()
{
	this->name = copy.name;
	this->HitPoint = copy.HitPoint;
	this->EnergyPoint = copy.EnergyPoint;
	this->AttackDamage = copy.AttackDamage;
	return (*this);
}

std::string DiamondTrap::getName()
{
	return this->name;
}

unsigned int DiamondTrap::getHitPoint()
{
	return this->HitPoint;
}

unsigned int DiamondTrap::getEnergyPoint()
{
	return this->EnergyPoint;
}

unsigned int DiamondTrap::getAttackDamage()
{
	return this->AttackDamage;
}

void DiamondTrap::whoAmI()
{
	std::cout << " My name is " << this->name << " clapTrap name is " << this->ClapTrap::name << std::endl;
}
