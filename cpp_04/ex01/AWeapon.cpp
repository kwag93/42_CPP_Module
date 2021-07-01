/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aweapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 11:12:53 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/27 12:40:31 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->name = name;
	this->apcost = apcost;
	this->damage = damage;
}

AWeapon::~AWeapon()
{
}

AWeapon &AWeapon::operator=(const AWeapon& weapon)
{
	this->name = weapon.name;
	this->apcost = weapon.apcost;
	this->damage = weapon.damage;
	return (*this);
}

AWeapon::AWeapon(const AWeapon& weapon)
{
	this->name = weapon.name;
	this->apcost = weapon.apcost;
	this->damage = weapon.damage;
}

std::string AWeapon::getName(void) const
{
	return (this->name);
}

int AWeapon::getAPCost() const
{
	return this->apcost;
}

int AWeapon::getDamage() const
{
	return this->damage;
}