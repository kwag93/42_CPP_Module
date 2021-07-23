/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 16:36:46 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/30 12:04:06 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout<<"* teleports from space *"<<std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout<<"I’ll be back…"<<std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &assault)
{
	(void)assault;
	std::cout<<"* teleports from space *"<<std::endl;
}

ISpaceMarine* AssaultTerminator::clone() const
{
	return new AssaultTerminator(*this);
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &assault)
{
	(void)assault;
	return (*this);
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;

}
void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}
