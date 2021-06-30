/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 16:36:57 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/30 11:15:52 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad
{
private:
	int count;
	ISpaceMarine **array;
public:
	Squad();
	~Squad();
	Squad(const Squad &squad);
	Squad &operator=(Squad const &squad);

	int getCount() const;
	ISpaceMarine* getUnit(int index) const;

	int push(ISpaceMarine *unit);
};

#endif
