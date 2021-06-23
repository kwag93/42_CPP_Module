/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 09:22:17 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/23 09:26:00 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name)
{
	this->name = name;
	std::cout<<this->name<<" is born!"<<std::endl;
}

Pony::~Pony()
{
	std::cout<<this->name<<" is dead!"<<std::endl;
}

void Pony::SaySomething()
{
	std::cout<<"Hi My name is " << this->name << std::endl;
}
