/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 10:22:55 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/19 15:25:48 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
	std::cout<<"Default constructor Sorcerer"<<std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title)
:name(name), title(title)
{
	std::cout << this->name <<" "<< this->title << ", is born !"<<std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << " " << this->title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer &Sorcerer::operator=(const Sorcerer& sor)
{
	this->name = sor.name;
	this->title = sor.title;
	return (*this);
}

Sorcerer::Sorcerer(const Sorcerer& sor)
{
	this->name = sor.name;
	this->title = sor.title;
}

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer)
{
	out << "I'm " << sorcerer.getName() << " " << sorcerer.getTitle() << ", and I like ponies !" << std::endl;
	return out;
}

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

void Sorcerer::polymorph(Peon const &poem) const
{
	poem.getPolymorphed();
}

std::string Sorcerer::getName() const
{
	return this->name;
}

std::string Sorcerer::getTitle() const
{
	return this->title;
}
