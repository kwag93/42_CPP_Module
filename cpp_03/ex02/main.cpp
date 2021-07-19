/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:18:44 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/19 14:46:15 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap frag("fragtrap");

	frag.highFivesGuys();
	frag.attack("bkwag");
	frag.beRepaired(10);
	frag.takeDamage(10);
	return 0;
}
