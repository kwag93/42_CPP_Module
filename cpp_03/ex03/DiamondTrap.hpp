/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 15:20:17 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/19 15:01:23 by bkwag            ###   ########.fr       */
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
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	~DiamondTrap();
	DiamondTrap(const DiamondTrap& copy);
	DiamondTrap& operator=(const DiamondTrap& copy);
	void attack(const std::string & target);
	void whoAmI();
};

#endif
