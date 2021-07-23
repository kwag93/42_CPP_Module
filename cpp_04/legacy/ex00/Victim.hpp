/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 10:23:06 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/19 15:18:33 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim
{
protected:
	std::string name;
public:
	Victim();
	Victim(std::string name);
	~Victim();
	Victim &operator=(const Victim& vic);
	Victim(const Victim& vic);
	virtual void getPolymorphed() const;
	std::string getName() const;
	std::string getTitle() const;
};

std::ostream &operator<<(std::ostream &out, Victim const &victim);

#endif
