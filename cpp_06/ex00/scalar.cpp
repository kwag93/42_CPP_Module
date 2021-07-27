/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:56:50 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/200 15:05:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar.hpp"

int ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

Scalar::Scalar(const std::string &argv)
{
	this->str = argv;
	this->nan_float_flag = false;
	this->nan_double_flag = false;
	this->float_flag = false;
	this->double_flag = false;
	this->impossible_flag = false;
	this->type = parse();
	this->conversion();
}

void Scalar::Print()
{
	if (this->type == 'e' || this->impossible_flag)
		return;
	std::cout << "char: ";
	this->PrintChar();
	std::cout << std::endl;

	std::cout << "int: ";
	this->PrintInt();
	std::cout << std::endl;

	std::cout << "float: ";
	this->PrintFloat();
	std::cout << std::endl;

	std::cout << "double: ";
	this->PrintDouble();
	std::cout << std::endl;
}

void Scalar::PrintChar()
{
	if (this->nan_float_flag || this->nan_double_flag || (this->over_flag || this->ivalue < 0 || this->ivalue > 127))
		std::cout << "impossible";
	else if (this->cvalue < 32 || this->cvalue > 126)
		std::cout << "Non displayable";
	else
	{
		std::cout << "'" << (char)(this->cvalue) << "'";
	}
}

void Scalar::PrintInt()
{
	if (this->nan_float_flag || this->nan_double_flag || this->over_flag)
		std::cout << "impossible";
	else
		std::cout << this->ivalue;
}

void Scalar::PrintFloat()
{
	std::stringstream ss;

	if (this->nan_float_flag)
		std::cout << this->str;
	else if (this->nan_double_flag)
		std::cout << this->str << "f";
	else
	{
		ss << this->fvalue;
		if (isinf(this->fvalue))
		{
			std::cout << this->fvalue << "f";
		}
		else if (ss.str().find('.') != std::string::npos)
			std::cout << this->fvalue << "f";
		else
			std::cout << this->fvalue << ".0f";
	}
}

void Scalar::PrintDouble()
{
	std::stringstream ss;

	if (this->nan_float_flag)
	{
		this->str[this->str.length() - 1] = '\0';
		std::cout << this->str;
	}
	else if (this->nan_double_flag)
		std::cout << this->str;
	else
	{
		ss << this->dvalue;
		if (isinf(this->dvalue))
		{
			std::cout << this->dvalue;
		}
		else if (ss.str().find('.') != std::string::npos)
			std::cout << this->dvalue;
		else
			std::cout << this->dvalue << ".0";
	}
}

void Scalar::FromInteger()
{
	long number;

	std::stringstream ss;
	ss << this->str;
	ss >> number;

	if (number > INT_MAX || number < INT_MIN)
	{
		this->over_flag = true;
	}
	this->ivalue = number;
	this->fvalue = static_cast<float>(this->ivalue);
	this->dvalue = static_cast<double>(this->ivalue);
	this->cvalue = static_cast<char>(this->ivalue);
}

void Scalar::FromFloat()
{
	if (this->nan_float_flag)
		return;
	this->str[this->str.length() - 1] = '\0';
	std::stringstream ss;
	ss << this->str;
	ss >> this->fvalue;

	if (this->fvalue > INT_MAX || this->fvalue < INT_MIN)
	{
		this->over_flag = true;
	}
	// reference https://stackoverflow.com/questions/36432173/efficient-float-to-int-without-overflow
	float max = static_cast<float>(INT_MAX); // fvalue가 오차가 있을 수도 있어서 그대로 int로 바꿔주면 오버플로우가 발생해서
	float min = static_cast<float>(INT_MIN); // int_max, int_min을 float로 바꿔서 fvalue와 비교한 다음 min인지 max인지 판단을 한다.

	if (max == this->fvalue)
		this->ivalue = INT_MAX;
	else if (min == this->fvalue)
		this->ivalue = INT_MIN;
	else
		this->ivalue = static_cast<int>(this->fvalue);
	this->dvalue = static_cast<double>(this->fvalue);
	this->cvalue = static_cast<char>(this->fvalue);
}

void Scalar::FromDouble()
{
	if (this->nan_double_flag)
		return;
	std::stringstream ss;
	ss << this->str;
	ss >> this->dvalue;

	if (this->dvalue > INT_MAX || this->dvalue < INT_MIN)
	{
		this->over_flag = true;
	}
	// reference https://stackoverflow.com/questions/36432173/efficient-float-to-int-without-overflow
	double max = static_cast<double>(INT_MAX); // fvalue가 오차가 있을 수도 있어서 그대로 int로 바꿔주면 오버플로우가 발생해서
	double min = static_cast<double>(INT_MIN); // int_max, int_min을 float로 바꿔서 fvalue와 비교한 다음 min인지 max인지 판단을 한다.

	if (max <= this->dvalue)
		this->ivalue = INT_MAX;
	else if (min >= this->dvalue)
		this->ivalue = INT_MIN;
	else
		this->ivalue = static_cast<int>(this->dvalue);
	this->ivalue = static_cast<int>(this->dvalue);
	this->fvalue = static_cast<float>(this->dvalue);
	this->cvalue = static_cast<char>(this->dvalue);
}

void Scalar::FromChar()
{
	std::stringstream ss;
	ss << this->str;
	ss >> this->cvalue;
	if (ft_isdigit(this->cvalue))
		this->cvalue -= 48;
	this->fvalue = static_cast<float>(this->cvalue);
	this->dvalue = static_cast<double>(this->cvalue);
	this->ivalue = static_cast<int>(this->cvalue);
}

void Scalar::conversion(void)
{
	std::stringstream ss;
	if (this->type == 'i')
	{
		FromInteger();
	}
	else if (this->type == 'f')
	{
		this->float_flag = true;
		FromFloat();
	}
	else if (this->type == 'd')
	{
		this->double_flag = true;
		FromDouble();
	}
	else if (this->type == 'c')
	{
		FromChar();
	}
	else
	{
		std::cout << "the conversion is impossible" << std::endl;
	}
}

char Scalar::parse(void)
{
	if (this->str == "nanf" || this->str == "-inff" || this->str == "+inff" || this->str == "inff")
	{
		this->nan_float_flag = true;
		return 'f';
	}
	if (this->str == "nan" || this->str == "-inf" || this->str == "+inf" || this->str == "inf")
	{
		this->nan_double_flag = true;
		return 'd';
	}
	if (this->str.length() == 1 && ft_isprint(this->str[0]))
	{
		return 'c';
	}
	else // i , (f,d)
	{
		int i = 0;
		bool ford = false;
		bool isfloat = false;
		while (i < (int)(this->str.length()) && ((str[i] == '+') || (str[i] == '-')))
			i++;
		for (; i < str[i]; i++)
		{
			if (!ford && str[i] == '.') //소수점은 한번만 허용
			{
				ford = true;
				continue;
			}
			if (this->str[i] == 'e' && (this->str[i + 1] == '-' || this->str[i + 1] == '+' || std::isdigit(this->str[i + 1])))
			{
				if (this->str[this->str.length() - 1] == 'f')
					return 'f';
				return 'd';
			}
			if (i == (int)(this->str.length() - 1) && ford && str[i] == 'f')
			{
				isfloat = true;
				continue;
			}
			if (!ft_isdigit(str[i]))
				return 'e';
		}
		if (ford)
		{
			if (isfloat)
				return 'f';
			return 'd';
		}
		return 'i';
	}
}
