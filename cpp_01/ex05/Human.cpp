/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 10:54:06 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/23 11:14:32 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

std::string Human::identify() const
{
	return this->brain.identify();
}

const Brain &Human::getBrain() const
{
	return this->brain;
}

