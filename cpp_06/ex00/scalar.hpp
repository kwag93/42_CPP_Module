/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:48:48 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/28 14:39:11 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
#include <iomanip>

class Scalar
{
private:
	std::string str;

public:
    Scalar();
	Scalar(const std::string &argv);
	~Scalar();
    Scalar(const Scalar &other);
    Scalar &operator=(const Scalar &scalar);
	operator char(void) const;
	operator int(void) const;
	operator double(void) const;
	operator float(void) const;
	class ImpossibleException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class NonDisplayableException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	void PrintInt();
	void PrintChar();
	void PrintFloat();
	void PrintDouble();
};

#endif
