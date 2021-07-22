/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 10:53:40 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/22 13:46:19 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:
	int value;
	static const int bit = 8;

public:
	Fixed();
	~Fixed();
	Fixed(Fixed const &fixed);
	Fixed &operator=(Fixed const &fixed);

	int getRawBits(void) const;
	void setRawbits(int const raw);
};

#endif
