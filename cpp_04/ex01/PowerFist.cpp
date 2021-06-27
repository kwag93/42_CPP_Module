/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 11:13:13 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/27 12:31:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::~PowerFist()
{
}

PowerFist& PowerFist::operator = (const PowerFist& plasma)
{
	this->name = plasma.name;
	this->apcost = plasma.apcost;
	this->damage = plasma.damage;
	return (*this);
}

void PowerFist::attack(void) const
{
	std::cout << "* pschhh...  SBAM! *" << std::endl;
}
