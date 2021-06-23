/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 09:33:43 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/23 09:52:29 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEVENT_HPP
# define ZOMBIEVENT_HPP

# include <iostream>
# include <random>
# include "Zombie.hpp"

class ZombieEvent
{
	public:
	std::string z_type;
	void setZombieType(std::string type);
	Zombie *newZombie(std::string name);
	Zombie *randomChump();
};

#endif
