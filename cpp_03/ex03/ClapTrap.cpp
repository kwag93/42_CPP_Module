/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:49:37 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/19 14:47:04 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout<<"Default constructor ClapTrap"<<std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout<<"Constructor ClapTrap"<<std::endl;
	this->name = name;
	this->HitPoint = 10;
	this->EnergyPoint = 10;
	this->AttackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout<<"Destructor ClapTrap"<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	this->name = copy.name;
	this->HitPoint = copy.HitPoint;
	this->EnergyPoint = copy.EnergyPoint;
	this->AttackDamage = copy.AttackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	this->name = copy.name;
	this->HitPoint = copy.HitPoint;
	this->EnergyPoint = copy.EnergyPoint;
	this->AttackDamage = copy.AttackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	std::cout << this->name << " attacks "
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
