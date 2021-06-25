/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:30:56 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/25 11:36:26 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <random>
#include <time.h>

class ScavTrap
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

	ScavTrap(std::string name);
	~ScavTrap();
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer();
};

#endif
