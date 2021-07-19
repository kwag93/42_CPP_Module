/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 10:22:49 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/19 15:13:07 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon()
{
	std::cout<<"Default constructor Peon"<<std::endl;
}

Peon::Peon(std::string name):Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon &Peon::operator=(const Peon& peon)
{
	this->name = peon.name;
	return (*this);
}

Peon::Peon(const Peon& peon):Victim(peon.name)
{
	this->name = peon.name;
}

void Peon::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a pink pony !" << std::endl;
}
