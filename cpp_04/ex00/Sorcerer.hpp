/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 10:23:01 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/27 11:01:12 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer
{
public:
	std::string name;
	std::string title;

	Sorcerer(std::string name, std::string title);
	~Sorcerer();
	Sorcerer &operator=(const Sorcerer& sor);
	Sorcerer(const Sorcerer& sor);
	void polymorph(Victim const &victim) const;
	void polymorph(Peon const &poem) const;
};

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer);


#endif
