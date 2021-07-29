/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 13:14:56 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/29 10:44:57 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar.hpp"

Scalar::Scalar() : str("")
{
}

Scalar::Scalar(const std::string &argv)
{
	if (argv.size() == 1 && argv.at(0) <= 127 && argv.at(0) >= -128 && (argv.at(0) < '0' || argv.at(0) > '9'))
		this->str = std::to_string(argv.at(0));
	else
		this->str = argv;
	return;
}

Scalar::~Scalar()
{
}

Scalar::Scalar(const Scalar &other)
{
	this->str = other.str;
}

Scalar &Scalar::operator=(const Scalar &scalar)
{
	this->str = scalar.str;
	return *this;
}

Scalar::operator char(void) const
{
	int c;
	// stoc 가 없어서 stoi 를 통해서 변환을 먼저 해주는것.
	try
	{ // stoi 는 e 처리가 안된다. 이에 처리하고 싶어서 stod 로 검사하는거
		if (this->str.find('e') != std::string::npos)
		{
			double d;
			d = std::stod(this->str);

			if (d > INT_MAX || d < INT_MIN)
				throw(Scalar::ImpossibleException());
			else
				c = static_cast<int>(d);
		}
		else
			c = std::stoi(this->str); //일단 숫자로 변환이 되는지 체크(char < int여서 int로 받으면 char 범위 체크도 가능해진다.)
	}
	catch (std::exception &e)
	{
		throw(Scalar::ImpossibleException());
	}
	if (c < -128 || c > 127) //char 범위 초과
		throw(Scalar::ImpossibleException());
	else if (c < 32 || c > 126) //아스키코드 표현 범위 초과
		throw(Scalar::NonDisplayableException());
	return (static_cast<char>(c));
}

Scalar::operator int(void) const
{
	int i = 0;

	try
	{
		if (this->str.find('e') != std::string::npos)
		{
			double d;
			d = std::stod(this->str);

			if (d > INT_MAX || d < INT_MIN)
				throw(Scalar::ImpossibleException());
			else
				i = static_cast<int>(d);
		}
		else
			i = std::stoi(this->str); //일단 숫자로 변환이 되는지 체크(char < int여서 int로 받으면 char 범위 체크도 가능해진다.)
	}
	catch (std::exception &e)
	{
		throw(Scalar::ImpossibleException());
	}
	return (i);
}
Scalar::operator double(void) const
{
	double d = 0;

	try
	{
		d = std::stod(this->str); //일단 숫자로 변환이 되는지 체크(char < int여서 int로 받으면 char 범위 체크도 가능해진다.)
	}
	catch (std::exception &e)
	{
		throw(Scalar::ImpossibleException());
	}
	return (d);
}

Scalar::operator float(void) const
{
	float f = 0;

	try //1.17549435×10-38 ~ 3.40282347× 1038
	{
		f = std::stof(this->str); //일단 숫자로 변환이 되는지 체크(char < int여서 int로 받으면 char 범위 체크도 가능해진다.)
	}
	catch (std::exception &e)
	{
		throw(Scalar::ImpossibleException());
	}
	return (f);
}

void Scalar::PrintInt()
{
	try
	{
		std::cout << "int      : ";
		std::cout << static_cast<int>(*this) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void Scalar::PrintChar()
{
	char c;

	try
	{
		std::cout << "char     : ";
		c = static_cast<char>(*this);
		std::cout << "'" << c << "'" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void Scalar::PrintFloat()
{
	float f;
	std::stringstream ss;

	try
	{
		std::cout << "float    : ";
		f = static_cast<float>(*this);
		std::cout << f;
		// str 들어온게 숫자 or 지수(e) 일수 있는데, 캐스팅시 무조건 숫자가 된다.
		// 단 이 경우 10의 6승 이상은 출력시 e로 변환해서 출력해주어야 한다.
		// 이 지수 처리를 위해서 length를 검사하는것이다.
		if (!(std::isinf(f) || std::isnan(f))) // inf nan 체크해서 해당 경우는 그냥 f출력
		{
			ss << std::scientific << f;
			// scientific 을 사용하면 지수 처리가 된다. 1e2 방식으로 바꿈
			std::string temp = ss.str();			// 다시 문자열로 바꾸어준다
			temp = temp.substr(temp.find('e') + 1); // find를 통해 e의 인덱스를 찾아 다음 문자열을 잘라준다
			int length = std::stoi(temp);			// temp 를 stoi로 다시 변환하여 10의 몇승인지를 체크해준다.

			if (length >= 0 && length < 6)		 // 0~ 5 까지는 숫자로 처리해주고
				if (fabs(f - round(f)) < 0.0001) // 소수 부분이 0.0001 미만이면 0으로 취급해준다.
					std::cout << ".0";
		}
		std::cout << "f" << std::endl; // float는 f가 붙어야 함
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void Scalar::PrintDouble()
{
	double d;
	std::stringstream ss;

	try
	{
		std::cout << "double   : ";
		d = static_cast<double>(*this);
		std::cout << d;

		if (!(std::isinf(d) || std::isnan(d)))
		{
			ss << std::scientific << d;
			std::string temp = ss.str();
			temp = temp.substr(temp.find('e') + 1);
			int length = std::stoi(temp);

			if (length >= 0 && length < 6)
				if (fabs(d - round(d)) < 0.0001)
					std::cout << ".0";
		}
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

const char *Scalar::ImpossibleException::what() const throw()
{
	return "impossible";
}

const char *Scalar::NonDisplayableException::what() const throw()
{
	return "Non displayable";
}
