/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 11:13:02 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/27 12:43:33 by marvin           ###   ########.fr       */
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
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	Enemy(const Enemy& enemy);
	Enemy &operator=(const Enemy& enemy);
	std::string getType() const;
	int getHP() const;
	virtual void takeDamage(int damage);
};

#endif
