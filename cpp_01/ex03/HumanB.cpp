/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 11:20:37 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/23 12:09:25 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):weapon(NULL)
{
	this->name = name;
}

HumanB::HumanB(std::string name, Weapon *weapon):weapon(weapon)
{
	this->name = name;
}

void HumanB::attack()
{
	std::cout << this->name << " attacks with his" << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
