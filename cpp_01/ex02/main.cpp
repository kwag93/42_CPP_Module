/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 09:33:32 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/23 10:07:16 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent *zombieEvent = new ZombieEvent();
	zombieEvent->setZombieType("Zombie");
	Zombie *new_one = zombieEvent->randomChump();
	zombieEvent->setZombieType("Transparent Dragon");
	Zombie *new_two = zombieEvent->newZombie("bkwag");
	Zombie *new_three = zombieEvent->newZombie("hyunyoo");
	new_two->announce();
	new_three->announce();
	delete new_one;
	delete new_two;
	delete new_three;
	delete zombieEvent;
	return 0;
}
