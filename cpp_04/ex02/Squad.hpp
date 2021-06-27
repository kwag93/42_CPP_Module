/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 16:36:57 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/28 08:31:50 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad : public ISquad
{

public:
	Suquad();
	~Squad();

	Squad &operaotr=(Squad const &squad);

	int getCount() const;
	ISpaceMarine* getUnit(int index) const;

	int push(ISpaceMarine *unit);
};

#endif
