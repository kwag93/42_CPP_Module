/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:49:35 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/25 12:03:11 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
public:
	std::string name;
	int hitPoint;
	int maxHitPoint;
	int energyPoint;
	int maxEnergyPoint;
	int	level;
	int meleeAttackDamage;
	int rangedAttackDamage;
	int armorDamageReduction;

	ClapTrap(std::string name);
	~ClapTrap();
	virtual void rangedAttack(std::string const & target);
	virtual void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
