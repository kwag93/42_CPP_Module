/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 11:13:18 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/27 12:12:274 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion& rad):Enemy(rad.getHP(),rad.getType())
{
}

RadScorpion &RadScorpion::operator=(const RadScorpion& rad)
{
	this->hp = rad.hp;
	this->type = rad.type;
	return (*this);
}

void RadScorpion::takeDamage(int damage)
{
	int realDamage = 0;

	damage -= 3;
	if (damage < 0)
	{
		return ;
	}
	if (this->hp < damage)
		realDamage = this->hp;
	else
		realDamage = damage;
	this->hp -= realDamage;
}
