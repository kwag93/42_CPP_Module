/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:18:44 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/25 14:55:43 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

int main()
{
	SuperTrap super("super");
	NinjaTrap ninja("naruto");

	srand(time(NULL));

	super.ninjaShoebox(ninja);
	super.vaulthunter_dot_exe(ninja.name);
	super.vaulthunter_dot_exe(ninja.name);
	super.takeDamage(100);
	super.meleeAttack("hyunyoo");
	super.rangedAttack("GLaDOS");
	super.beRepaired(80);
	super.beRepaired(20);
	super.beRepaired(40);

}
