/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 10:53:44 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/22 13:35:45 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
}

Fixed::Fixed(float const val)
{
	this->value = roundf(val * (1 << Fixed::bit));
}

Fixed::Fixed(int const val)
{
	this->value = val << Fixed::bit;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(Fixed const &fixed)
{
	this->value = fixed.getRawBits();
}

Fixed &Fixed::operator=(Fixed const &fixed)
{
	this->value = fixed.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &out, Fixed const &output)
{
	out << output.toFloat();
	return out;
}

Fixed &Fixed::operator+(const Fixed &value)
{
	this->value += value.value;
	return *this;
}

Fixed &Fixed::operator-(const Fixed &value)
{
	this->value -= value.value;
	return *this;
}

Fixed &Fixed::operator*(const Fixed &value)
{
	this->value *= (value.value / (1 << value.bit));
	return *this;
}

Fixed &Fixed::operator/(const Fixed &value)
{
	this->value /= (value.value * (1 << value.bit));
	return *this;
}

bool Fixed::operator>(const Fixed &value)
{
	return (this->value > value.value);
}

bool Fixed::operator<(const Fixed &value)
{
	return (this->value < value.value);
}

bool Fixed::operator<=(const Fixed &value)
{
	return (this->value <= value.value);
}

bool Fixed::operator>=(const Fixed &value)
{
	return (this->value >= value.value);
}

bool Fixed::operator==(const Fixed &value)
{
	return (this->value == value.value);
}

bool Fixed::operator!=(const Fixed &value)
{
	return (this->value != value.value);
}

Fixed &Fixed::operator++()
{
	this->value += 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++*this;
	return temp;
}

Fixed &Fixed::operator--()
{
	this->value -= 1;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--*this;
	return temp;
}

Fixed Fixed::max(Fixed &a, Fixed &b)
{
	if (a < b)
		return b;
	else
		return a;
}

Fixed Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return b;
	else
		return a;
}

Fixed const Fixed::max(const Fixed &a, const Fixed &b)
{
	Fixed temp(a);
	if (temp < b)
		return b;
	else
		return a;
}

Fixed const Fixed::min(const Fixed &a, const Fixed &b)
{
	Fixed temp(a);
	if (temp > b)
		return b;
	else
		return a;
}

float Fixed::toFloat(void) const
{
	return (float)this->value / (float)(1 << Fixed::bit);
}

int Fixed::toInt(void) const
{
	return this->value >> Fixed::bit;
}

int Fixed::getRawBits(void) const
{
	return this->value;
}

void Fixed::setRawbits(int const raw)
{
	this->value = raw;
}
