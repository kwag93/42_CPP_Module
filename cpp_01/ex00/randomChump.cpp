/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 09:33:41 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/21 13:45:04 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <random>

void randomChump(std::string name)
{
	Zombie *zombie = new Zombie(name);
	zombie->announce();
	delete zombie;
}
