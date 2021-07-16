/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:18:44 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/25 11:47:49 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap scav("Scav");

	srand(time(NULL));
	for(int i = 0; i < 5; i++)
		scav.challengeNewcomer();
	scav.takeDamage(100);
	scav.takeDamage(20);
	scav.takeDamage(30);
	scav.meleeAttack("hyunyoo");
	scav.rangedAttack("GLaDOS");
	scav.beRepaired(80);
	scav.beRepaired(20);
	scav.beRepaired(40);
}
