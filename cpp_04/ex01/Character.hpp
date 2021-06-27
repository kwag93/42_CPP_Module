/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 11:12:57 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/27 12:39:38 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
public:
	std::string name;
	int ap;
	AWeapon *weapon;

	Character(std::string const & name);
	~Character();
	Character(const Character& charac);
	Character &operator=(const Character& charac);
	void recoverAP();
	void equip(AWeapon* weapon);
	void attack(Enemy* enemy);
	std::string  getName() const;
};

std::ostream &operator<<(std::ostream &out, Character const &character);

#endif
