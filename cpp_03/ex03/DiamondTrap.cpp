/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 15:20:32 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/23 13:57:32 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Default constructor DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	std::cout << "Constructor DiamondTrap" << std::endl;
	this->name = name;
	this->HitPoint = this->FragTrap::HitPoint;
	this->EnergyPoint = this->ScavTrap::EnergyPoint;
	this->AttackDamage = this->FragTrap::AttackDamage;
	this->ClapTrap::name = name + "_clap_name";
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy.name)
{
	this->name = copy.name;
	this->HitPoint = copy.HitPoint;
	this->EnergyPoint = copy.EnergyPoint;
	this->AttackDamage = copy.AttackDamage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor DiamondTrap" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
	this->name = copy.name;
	this->HitPoint = copy.HitPoint;
	this->EnergyPoint = copy.EnergyPoint;
	this->AttackDamage = copy.AttackDamage;
	return (*this);
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->name << " clapTrap name is " << this->ClapTrap::name << std::endl;
}
