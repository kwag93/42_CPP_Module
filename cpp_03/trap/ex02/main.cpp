/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:18:44 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/25 12:14:39 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap scav("Scav");
	FragTrap frag("Frag");

	srand(time(NULL));
	for(int i = 0; i < 5; i++)
	{
		scav.challengeNewcomer();
		frag.vaulthunter_dot_exe("Thanos");
	}
	scav.takeDamage(100);
	scav.meleeAttack("hyunyoo");
	scav.rangedAttack("GLaDOS");
	scav.beRepaired(80);
	scav.beRepaired(20);
	scav.beRepaired(40);

	frag.takeDamage(100);
	frag.meleeAttack("hyunyoo");
	frag.rangedAttack("GLaDOS");
	frag.beRepaired(80);
	frag.beRepaired(20);
	frag.beRepaired(40);

}
