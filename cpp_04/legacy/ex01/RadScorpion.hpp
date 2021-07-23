/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 11:13:20 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/27 12:45:48 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion: public Enemy
{
public:
	RadScorpion();
	virtual ~RadScorpion();
	RadScorpion(const RadScorpion& rad);
	RadScorpion &operator=(const RadScorpion& rad);
	virtual void takeDamage(int damage);
};

#endif
