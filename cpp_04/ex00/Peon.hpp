/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 10:22:51 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/27 11:07:02 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
public:
	Peon(std::string name);
	~Peon();
	Peon &operator=(const Peon& peon);
	Peon(const Peon& peon);
	virtual void getPolymorphed() const;
};

#endif
