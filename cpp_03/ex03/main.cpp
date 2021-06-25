/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:18:44 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/25 14:30:58 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

int main()
{
	ScavTrap scav("Scav");
	FragTrap frag("Frag");
	ClapTrap clap("Clap");
	NinjaTrap ninja("Naruto");
	NinjaTrap ninja2("Sasuke");

	srand(time(NULL));
	ninja.ninjaShoebox(scav);
	ninja.ninjaShoebox(frag);
	ninja.ninjaShoebox(clap);
	ninja.ninjaShoebox(ninja2);

	ninja.takeDamage(100);
	ninja.meleeAttack("hyunyoo");
	ninja.rangedAttack("GLaDOS");
	ninja.beRepaired(80);
	ninja.beRepaired(20);
	ninja.beRepaired(40);
}
