/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 14:04:31 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/30 14:36:310 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type):_type(type),_xp(0)
{
}

AMateria::~AMateria()
{
}

std::string const &AMateria::getType() const
{
	return this->_type;
} //Returns the materia type

unsigned int AMateria::getXP() const  //Returns the Materia's XP
{
	return this->_xp;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
}
