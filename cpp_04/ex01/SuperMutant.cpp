/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 11:13:33 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/27 12:11:118 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "SuperMutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh... " << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant& mutant):Enemy(mutant.getHP(),mutant.getType())
{

}

SuperMutant &SuperMutant::operator=(const SuperMutant& mutant)
{
	this->hp = mutant.hp;
	this->type = mutant.type;
	return (*this);
}

void SuperMutant::takeDamage(int damage)
{
	this->hp -= damage - 3;
}
