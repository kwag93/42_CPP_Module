/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:18:44 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/19 15:09:13 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamondtrap("diamond");

	diamondtrap.highFivesGuys();
	diamondtrap.attack("bkwag");
	diamondtrap.beRepaired(10);
	diamondtrap.takeDamage(10);
	diamondtrap.whoAmI();
	return 0;
}
