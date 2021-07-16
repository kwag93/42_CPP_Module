/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 10:53:40 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/16 11:40:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed{
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
	Fixed &operator+(Fixed value);
	Fixed &operator-(Fixed value);
	Fixed &operator*(Fixed value);
	Fixed &operator/(Fixed value);
	bool operator>(Fixed value);
	bool operator<(Fixed value);
	bool operator<=(Fixed value);
	bool operator>=(Fixed value);
	bool operator==(Fixed value);
	bool operator!=(Fixed value);
	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);

	static float max(Fixed a, Fixed b);
	static float min(Fixed a, Fixed b);
};

std::ostream &operator<<(std::ostream &out, Fixed const &output);

#endif
