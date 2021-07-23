/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 11:12:59 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/19 15:33:56 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{
	this->hp = 0;
	this->type = "";
}

Enemy::Enemy(int hp, std::string const & type)
{
	this->hp = hp;
	this->type = type;
}

Enemy::~Enemy()
{

}

Enemy::Enemy(const Enemy& enemy)
{
	this->hp = enemy.getHP();
	this->type = enemy.getType();
}

Enemy &Enemy::operator=(const Enemy& enemy)
{
	this->hp = enemy.getHP();
	this->type = enemy.getType();
	return *this;
}

std::string Enemy::getType() const
{
	return this->type;
}

int Enemy::getHP() const
{
	return this->hp;
}

void Enemy::takeDamage(int damage)
{
	int realDamage = 0;
	if (damage < 0)
	{
		return ;
	}
	if (this->hp < damage)
		realDamage = this->hp;
	else
		realDamage = damage;
	this->hp -= realDamage;
}
