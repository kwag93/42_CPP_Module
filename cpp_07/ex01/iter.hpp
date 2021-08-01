/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 08:31:08 by bkwag             #+#    #+#             */
/*   Updated: 2021/08/02 08:31:10 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *ptr, unsigned int len, void (*f)(T const &arr))
{
	for (unsigned int i = 0; i < len; i++)
	{
		(*f)(ptr[i]);
	}
}
#endif
