/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 11:12:42 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/19 15:26:04 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
#include <iostream>

class AWeapon
{
protected:
	std::string name;
	int damage;
	int apcost;
public:
	AWeapon();
	AWeapon(std::string const & name, int apcost, int damage);
	~AWeapon();
	std::string getName(void) const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
	AWeapon(const AWeapon& weapon);
	AWeapon &operator=(const AWeapon& weapon);
};

#endif
