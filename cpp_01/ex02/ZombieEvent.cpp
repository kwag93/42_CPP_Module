/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 09:33:41 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/23 10:05:42 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string type)
{
	this->z_type = type;
}

std::string randomName()
{
	char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	std::string new_name;
	int len;

	srand(time(NULL));
	len = rand() % 4 + 4;
	for(int i = 0; i < len; i++)
	{
		new_name += alpha[rand() % 26];
	}
	return new_name;
}

Zombie *ZombieEvent::newZombie(std::string new_name)
{
	Zombie *zombie = new Zombie(this->z_type, new_name);
	return zombie;
}

Zombie *ZombieEvent::randomChump(void)
{
	std::string new_name = randomName();
	Zombie *zombie = new Zombie(this->z_type, new_name);
	zombie->announce();
	return zombie;
}
