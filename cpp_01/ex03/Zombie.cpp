/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 09:32:36 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/23 10:11:40 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << "<" << this->name << " (" << this->type << ")> is Died" << std::endl;
}

Zombie::Zombie(std::string type, std::string name)
:type(type), name(name)
{
}

void Zombie::announce(void)
{
	std::cout << "<" << this->name <<  "(" << this->type << ")" << "> ";
	std::cout << "Graaaaaaaaaaa......." << std::endl;
}
