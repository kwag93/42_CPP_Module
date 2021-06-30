/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 14:04:41 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/30 16:30:58 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria("ice")
{
}

Ice::~Ice()
{

}

Ice::Ice(Ice const &ice):AMateria(ice.getType())
{
	this->_xp = ice.getXP();
}

Ice &Ice::operator=(Ice const &ice)
{
	this->_xp = ice.getXP();
	return (*this);
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
