/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:30:52 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/16 14:55:218 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	this->HitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 20;
	std::cout <<"ScavTrap "<< this->name << " is born" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap "<< this->name << " is dead" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& const copy):ClapTrap(copy.name)
{
	this->name = copy.name;
	this->HitPoint = copy.HitPoint;
	this->EnergyPoint = copy.EnergyPoint;
	this->AttackDamage = copy.AttackDamage;
}

ScavTrap& ScavTrap::operator=(ScavTrap& const copy)
{
	this->name = copy.name;
	this->HitPoint = copy.HitPoint;
	this->EnergyPoint = copy.EnergyPoint;
	this->AttackDamage = copy.AttackDamage;
	return (*this);
}

void ScavTrap::GuardGate()
{
	std::cout << "ScavTrap changes to GuardGate mode." << std::endl;
}
