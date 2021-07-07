/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 10:10:33 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/07 10:42:51 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>

template <typename T>
int easyfind(T container, int two)
{
	typename T::iterator itr = container.begin();

	for(;itr!=container.end(); itr++)
	{
		std::string str_one = std::to_string(*itr);
		std::string str_two = std::to_string(two);

		if(str_one.find(str_two) != std::string::npos)
		{
			return std::distance(container.begin(),itr);
		}
	}
	return -1;
}

#endif
