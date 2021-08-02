/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 11:06:54 by bkwag             #+#    #+#             */
/*   Updated: 2021/08/02 11:06:55 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>

template <typename T>
int easyfind(T container, int two)
{
	typename T::iterator it;
	if ((it = find(container.begin(), container.end(), two)) == container.end())
	{
		throw std::exception();
	}
	return *it;
}

#endif
