/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 11:20:35 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/23 12:08:28 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:
	Weapon *weapon;
	std::string name;

	HumanB(std::string name);
	HumanB(std::string name, Weapon *weapon);
	void setWeapon(Weapon &weapon);
	void attack();
};

#endif
