/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 16:36:59 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/30 11:56:58 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout<<"Tactical Marine ready for battle!"<<std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout<<"Aaargh..."<<std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &tactical)
{
	(void)tactical;
	std::cout<<"Tactical Marine ready for battle!"<<std::endl;
}

ISpaceMarine* TacticalMarine::clone() const
{
	return new TacticalMarine(*this);
}

TacticalMarine &TacticalMarine::operator=(TacticalMarine const &tactical)
{
	(void)tactical;
	return (*this);
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;

}
void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
