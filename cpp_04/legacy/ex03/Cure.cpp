/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 14:04:37 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/30 16:28:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():AMateria("cure")
{
}

Cure::~Cure()
{

}

Cure::Cure(Cure const &cure):AMateria(cure.getType())
{
	this->_xp = cure.getXP();
}

Cure &Cure::operator=(Cure const &cure)
{
	this->_xp = cure.getXP();
	return (*this);
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}
