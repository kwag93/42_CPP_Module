/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 10:34:59 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/19 14:44:51 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout<<"Default constructor FragTrap"<<std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	std::cout<<"Constructor FragTrap"<<std::endl;
	this->name = name;
	this->HitPoint = 100;
	this->EnergyPoint = 100;
	this->AttackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout<<"Destructor FragTrap"<<std::endl;
}

FragTrap::FragTrap(const FragTrap& copy):ClapTrap(copy.name)
{
	this->name = copy.name;
	this->HitPoint = copy.HitPoint;
	this->EnergyPoint = copy.EnergyPoint;
	this->AttackDamage = copy.AttackDamage;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
	this->name = copy.name;
	this->HitPoint = copy.HitPoint;
	this->EnergyPoint = copy.EnergyPoint;
	this->AttackDamage = copy.AttackDamage;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "✋ Let's high-five guys~!!" << std::endl;
}
