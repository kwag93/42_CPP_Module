/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 13:14:56 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/28 15:30:04 by hyunyoo          ###   ########.fr       */
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
	return ;
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
	int		c;

	try
	{
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
	int		i = 0;
	
	try
	{
		if (this->str.find('e') != std::string::npos)
		{
			double d;
			d = std::stod(this->str);

			if (d > INT_MAX || d < INT_MIN)
				throw (Scalar::ImpossibleException());
			else
				i = static_cast<int>(d);
		}
		else
			i = std::stoi(this->str); //일단 숫자로 변환이 되는지 체크(char < int여서 int로 받으면 char 범위 체크도 가능해진다.)
	}
	catch (std::exception &e)
	{
		throw (Scalar::ImpossibleException());
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
		throw (Scalar::ImpossibleException());
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
		throw (Scalar::ImpossibleException());
	}
	return (f);
}

void Scalar::PrintInt()
{
	try{
		std::cout<<"int      : ";
		std::cout<<static_cast<int>(*this)<<std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void Scalar::PrintChar()
{
	char c;
	
	try{
		std::cout<<"char     : ";
		c = static_cast<char>(*this);
		std::cout << "'" << c << "'" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void Scalar::PrintFloat()
{
	float f;
	std::stringstream ss;
	
	try{
		std::cout<<"float    : ";
		f = static_cast<float>(*this);
		std::cout << f;
		
		if(!(std::isinf(f) || std::isnan(f)))
		{
			ss << std::setprecision(0) << std::scientific << f;
			std::string temp = ss.str();
			temp = temp.substr(temp.find('e')+1);
			int length = std::stoi(temp);
		
			if(length >= 0 && length < 6)
				if(fabs(f - round(f)) < 0.0001)
					std::cout << ".0";
		}
		std::cout << "f" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

}

void Scalar::PrintDouble()
{
	double d;
	std::stringstream ss;
	
	try{
		std::cout<<"double   : ";
		d = static_cast<double>(*this);
		std::cout<< d;

		if(!(std::isinf(d) || std::isnan(d)))
		{
			ss << std::setprecision(0) << std::scientific << d;
			std::string temp = ss.str();
			temp = temp.substr(temp.find('e')+1);
			int length = std::stoi(temp);
			
			if(length >= 0 && length < 6)
				if(fabs(d - round(d)) < 0.0001)
					std::cout << ".0";
		}
		std::cout<<std::endl;
	}
	catch(std::exception &e)
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
