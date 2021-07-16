/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:49:37 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/16 15:11:55 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->HitPoint = 10;
	this->EnergyPoint = 10;
	this->AttackDamage = 0;
	std::cout << "ClapTrap "<< this->name << " is born" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap "<< this->name << " is dead" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& const copy)
{
	*this = copy;
}

ClapTrap& ClapTrap::operator=(ClapTrap& const copy)
{
	this->name = copy.name;
	this->HitPoint = copy.HitPoint;
	this->EnergyPoint = copy.EnergyPoint;
	this->AttackDamage = copy.AttackDamage;
	return (*this);
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "Claptrap " << this->name << " attacks "
	<< target << ", causing " << this->AttackDamage
	<< " points of damage!" << std::endl;
}


void ClapTrap::takeDamage(unsigned int amount)
{
	int damage;

	if(this->HitPoint <= 0)
	{
		std::cout << this->name << " is already dead."<<std::endl;
		return ;
	}
	if(this->HitPoint < amount)
		damage = this->HitPoint;
	else
		damage = amount;
	this->HitPoint -= damage;
	std::cout <<  this->name << " is attacked! " << damage
	<< " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->HitPoint += amount;
	std::cout << this->name << " has Recovered by " << amount
	<< " points!" << std::endl;
}