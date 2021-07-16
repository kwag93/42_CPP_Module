/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 09:33:32 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/16 11:41:05 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *new_one = randomChump();
	Zombie *new_two = newZombie("bkwag");
	Zombie *new_three = newZombie("hyunyoo");
	new_two->announce();
	new_three->announce();
	delete new_one;
	delete new_two;
	delete new_three;
	return 0;
}
