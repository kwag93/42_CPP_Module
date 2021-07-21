/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 11:18:07 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/21 15:47:28 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with his" << this->weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon &weapon)
{
	this->weapon = weapon;
}
