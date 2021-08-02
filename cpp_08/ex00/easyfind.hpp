/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 10:10:33 by bkwag             #+#    #+#             */
/*   Updated: 2021/08/01 12:15:24 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>

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
