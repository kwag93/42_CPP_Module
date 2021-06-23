/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 10:11:34 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/23 10:44:27 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string randomName()
{
	char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	std::string new_name;
	int len;

	len = rand() % 4 + 4;
	for(int i = 0; i < len; i++)
	{
		new_name += alpha[rand() % 26];
	}
	return new_name;
}

ZombieHorde::ZombieHorde(std::string type, int n)
{
	this->n = n;
	this->zombieList = new Zombie *[n];
	for(int i = 0; i < n; i++)
	{
		this->zombieList[i] = new Zombie(type, randomName());
	}
}

ZombieHorde::~ZombieHorde()
{
	for(int i = 0; i<this->n; i++)
	{
		delete this->zombieList[i];
	}
	delete[] this->zombieList;
	std::cout << "Horde is Dead" << std::endl;
}

void ZombieHorde::announce(void)
{
	for(int i=0; i < this->n; i++)
	{
		this->zombieList[i]->announce();
	}
}
