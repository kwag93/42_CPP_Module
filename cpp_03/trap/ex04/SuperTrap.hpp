/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 14:38:41 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/25 14:40:17 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <iostream>
#include <random>
#include <time.h>

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{
public:
	SuperTrap(std::string name);
	~SuperTrap();

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
};

#endif
