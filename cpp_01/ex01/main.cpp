/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 09:33:32 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/16 11:55:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *array = ZombieHorde(10, "zombie");

	for(int i=0; i < 10; i++)
	{
		array[i].announce();
	}
	delete[] array;
	return 0;
}
