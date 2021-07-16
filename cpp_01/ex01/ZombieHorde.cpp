/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 10:11:34 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/16 12:03:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *ZombieHorde(int n, std::string name)
{
	Zombie *zombieList;

	zombieList = new Zombie[n];
	for(int i = 0; i < n; i++)
	{
		zombieList[i].setName(name);
	}
	return zombieList;
}
