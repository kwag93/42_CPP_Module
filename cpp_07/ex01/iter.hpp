/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:18:44 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/29 13:28:06 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *ptr, unsigned int len, void (*f)(T const &arr))
{
	for(unsigned int i=0; i<len; i++)
	{
		(*f)(ptr[i]);
	}
}
#endif
