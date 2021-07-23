/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 11:13:02 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/19 15:26:50 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{
protected:
	int hp;
	std::string type;
public:
	Enemy();
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	Enemy(const Enemy& enemy);
	Enemy &operator=(const Enemy& enemy);
	std::string getType() const;
	int getHP() const;
	virtual void takeDamage(int damage);
};

#endif
