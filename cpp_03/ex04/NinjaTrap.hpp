/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 14:07:36 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/25 14:11:44 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <iostream>
#include <random>
#include <time.h>

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap: virtual public ClapTrap
{
public:
	NinjaTrap(std::string name);
	~NinjaTrap();
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void ninjaShoebox(ClapTrap &trap);
	void ninjaShoebox(ScavTrap &trap);
	void ninjaShoebox(FragTrap &trap);
	void ninjaShoebox(NinjaTrap &trap);
};

#endif
