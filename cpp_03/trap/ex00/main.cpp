/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:18:44 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/25 11:30:01 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap character("FR4G-TP");

	srand(time(NULL));
	for(int i = 0; i < 5; i++)
		character.vaulthunter_dot_exe("Thanos");
	character.takeDamage(100);
	character.takeDamage(20);
	character.takeDamage(30);
	character.meleeAttack("hyunyoo");
	character.rangedAttack("GLaDOS");
	character.beRepaired(80);
	character.beRepaired(20);
	character.beRepaired(40);
}
