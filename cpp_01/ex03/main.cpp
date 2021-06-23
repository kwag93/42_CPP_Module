/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 09:33:32 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/23 10:40:55 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main()
{
	srand((unsigned int)time(NULL));

	ZombieHorde *zombieHorde = new ZombieHorde("Orc", 10);
	zombieHorde->announce();
	delete zombieHorde;
	return 0;
}
