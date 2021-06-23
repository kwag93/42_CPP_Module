/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 10:11:29 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/23 10:34:07 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEVENT_HPP
# define ZOMBIEVENT_HPP

# include <iostream>
# include <random>
# include "Zombie.hpp"

class ZombieHorde
{
public:
	Zombie **zombieList;
	int n;
	ZombieHorde(std::string type, int n);
	~ZombieHorde();
	void announce();
};

#endif
