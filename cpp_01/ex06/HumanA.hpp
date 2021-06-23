/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 11:18:14 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/23 11:53:59 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public:
	HumanA(std::string name, Weapon &weapon);
	Weapon &weapon; //외부에서 무기의 setType 호출 시 변경되도록
	std::string name;
	void attack();
	void setWeapon(Weapon &weapon);
};

#endif
