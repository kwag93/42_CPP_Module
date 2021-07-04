/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 10:46:16 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/04 11:05:591 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <random>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base * generate(void)
{
	int len;
	len = rand() % 3;
	Base *result = nullptr;

	if(len == 0)
	{
		result = new A();
	}
	else if(len == 1)
	{
		result = new B();
	}
	else
	{
		result = new C();
	}
	return result;
}

void identify_from_pointer(Base * p)
{
	if(dynamic_cast<A *>(p) != nullptr)
	{
		std::cout<<"A!";
	}
	else if(dynamic_cast<B *>(p) != nullptr)
	{
		std::cout<<"B!";
	}
	else if(dynamic_cast<C *>(p) != nullptr)
	{
		std::cout<<"C!";
	}
}

void identify_from_reference( Base & p)
{
	try{
		A &temp = dynamic_cast<A &>(p);
		(void)temp;
		std::cout<<"A!";
	}
	catch(std::bad_cast exp){

	}

	try{
		B &temp = dynamic_cast<B &>(p);
		(void)temp;
		std::cout<<"B!";
	}
	catch(std::bad_cast exp){
	}

	try{
		C &temp = dynamic_cast<C &>(p);
		(void)temp;
		std::cout<<"C!";
	}
	catch(std::bad_cast exp){

	}
}

int main(void)
{
	srand(time(NULL));

	for (int i = 0; i < 50; i++)
	{
		Base *o = generate();
		std::cout << "Test " << i << ": ";
		identify_from_pointer(o);
		std::cout << ", ";
		identify_from_reference(*o);
		std::cout << std::endl;
		delete o;
	}

	return (0);

}
