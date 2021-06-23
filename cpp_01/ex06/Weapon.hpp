/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 11:18:19 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/23 11:52:11 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
public:
	Weapon();
	Weapon(std::string type);
	std::string type;
	std::string const &getType() const;
	void setType(std::string type);
};

#endif
