/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 09:33:38 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/21 13:45:05 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string name;

public:
	Zombie(std::string name);
	~Zombie();
	void announce();
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif
