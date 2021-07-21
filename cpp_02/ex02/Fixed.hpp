/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 10:53:40 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/21 16:12:45 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int value;
	static const int bit = 8;

public:
	Fixed();
	Fixed(const float val);
	Fixed(const int val);
	~Fixed();
	Fixed(Fixed const &fixed);

	Fixed &operator=(Fixed const &fixed);
	int getRawBits(void) const;
	void setRawbits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	Fixed &operator+(const Fixed &value);
	Fixed &operator-(const Fixed &value);
	Fixed &operator*(const Fixed &value);
	Fixed &operator/(const Fixed &value);
	bool operator>(const Fixed &value);
	bool operator<(const Fixed &value);
	bool operator<=(const Fixed &value);
	bool operator>=(const Fixed &value);
	bool operator==(const Fixed &value);
	bool operator!=(const Fixed &value);
	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);

	static Fixed max(Fixed &a, Fixed &b);
	static Fixed min(Fixed &a, Fixed &b);
	static const Fixed max(const Fixed &a, const Fixed &b);
	static const Fixed min(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &out, Fixed const &output);

#endif
