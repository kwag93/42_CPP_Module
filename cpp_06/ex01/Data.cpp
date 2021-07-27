/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 10:25:01 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/20 15:34:224 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

Data::Data() : str1(""), str2(""), num(0)
{
	std::cout << "Default constructor" << std::endl;
}

Data::Data(std::string str1, std::string str2, int num) : str1(str1), str2(str2), num(num)
{
	std::cout << "Constructor" << std::endl;
}

Data::~Data()
{
	std::cout << "Destructor" << std::endl;
}

Data::Data(const Data &other)
{
	*this = other;
}

Data &Data::operator=(const Data &data)
{
	this->str1 = data.str1;
	this->str2 = data.str2;
	this->num = data.num;
	return *this;
}

std::string Data::getStr1() const
{
	return this->str1;
}

std::string Data::getStr2() const
{
	return this->str2;
}

int Data::getNum() const
{
	return this->num;
}
