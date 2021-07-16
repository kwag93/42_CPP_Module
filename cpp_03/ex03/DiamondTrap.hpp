/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 15:20:17 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/16 15:50:15 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string name;
	unsigned int HitPoint;
	unsigned int EnergyPoint;
	unsigned int AttackDamage;
public:
	DiamondTrap(std::string name);
	~DiamondTrap();
	DiamondTrap(DiamondTrap& const copy);
	DiamondTrap& operator=(DiamondTrap& const copy);
	void attack(std::string const & target);
	void whoAmI();

	std::string getName();
	unsigned int getHitPoint();
	unsigned int getEnergyPoint();
	unsigned int getAttackDamage();
};

#endif
