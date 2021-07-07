/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 10:56:45 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/07 11:41:13 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <random>
#include <limits>

Span::Span(unsigned int n)
{
	this->arr = new int[n];
	this->arr_len = n;
	this->count = 0;
}

Span::~Span()
{
	delete[] this->arr;
}

void Span::addNumber(int num)
{
	if(this->count >= this->arr_len)
	{
		throw MemoryException();
	}
	this->arr[this->count++] = num;
}

void Span::addNumber(int start, int end)
{
	srand(time(NULL));
	for(int i = start; i<end; i++)
	{
		this->addNumber(rand()%10000);
	}
}

void Span::sort()
{
	for(int i = 0; i<this->count - 1;i++)
	{
		int min = i;
		for(int j = i + 1; j < this->count; j++)
		{
			if(this->arr[j] < this->arr[min])
				min = j;
		}
		if(i != min)
		{
			int temp = this->arr[i];
			this->arr[i] = this->arr[min];
			this->arr[min] = temp;
		}
	}
	for(int i = 0; i<this->count; i++)
		std::cout << this->arr[i] <<std::endl;
}

int Span::shortestSpan()
{
	int span = INT_MAX;
	if(this->count <= 1)
		throw ArrayLackException();
	this->sort();
	for(int i = 0; i<this->count - 1; i++)
	{
		if(this->arr[i+1] - this->arr[i] < span)
			span = this->arr[i+1] - this->arr[i];
	}
	return span;
}

int Span::longestSpan()
{
	if(this->count <= 1)
		throw ArrayLackException();
	this->sort();
	return this->arr[this->count - 1] - this->arr[0];
}
