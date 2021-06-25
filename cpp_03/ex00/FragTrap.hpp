/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 10:37:22 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/25 11:06:15 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <random>
#include <time.h>

class FragTrap
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

	FragTrap(std::string name);
	~FragTrap();
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);
};

#endif
