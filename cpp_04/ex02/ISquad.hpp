/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 16:36:52 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/30 12:02:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class ISquad
{
public:
	virtual ~ISquad() {}
	virtual int getCount() const = 0;
	virtual ISpaceMarine* getUnit(int index) const = 0;
	virtual int push(ISpaceMarine *unit) = 0;
};

#endif
