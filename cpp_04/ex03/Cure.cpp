/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 14:04:37 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/25 20:42:54 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():AMateria("cure")
{
	std::cout<<"Default Constructor Cure"<<std::endl;
}

Cure::~Cure()
{
	std::cout<<"Destructor Cure"<<std::endl;
}

Cure::Cure(Cure const &cure):AMateria(cure)
{
	std::cout<<"Copy Cure"<<std::endl;
	this->_xp = cure.getXP();
}

Cure &Cure::operator=(Cure const &cure)
{
	std::cout<<"= Operator Cure"<<std::endl;
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
