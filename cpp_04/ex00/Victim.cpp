/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 10:23:04 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/27 11:08:30 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name):
name(name)
{
	std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
}

Victim &Victim::operator=(const Victim& vic)
{
	this->name = vic.name;
	return (*this);
}

Victim::Victim(const Victim& vic)
{
	this->name = vic.name;
}

void Victim::getPolymorphed() const
{
	std::cout << this->name << "has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Victim const &victim)
{
	out << "I am " << victim.name << ", and I like otters!" << std::endl;
	return out;
}
