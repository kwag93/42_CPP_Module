/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 09:32:36 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/21 16:18:22 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
	: name(name)
{
	std::cout << "<" << this->name << "> "
			  << "is Born" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "<" << this->name << "> "
			  << "is Died" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "<" << this->name << "> ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}
