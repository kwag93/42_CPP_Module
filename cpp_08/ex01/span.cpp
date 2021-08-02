/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 11:07:04 by bkwag             #+#    #+#             */
/*   Updated: 2021/08/02 11:07:05 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <random>
#include <limits>

Span::Span()
{
	this->arr_len = 0;
	this->count = 0;
	this->arr.resize(0);
	return;
}

Span::Span(unsigned int n)
{
	this->arr_len = n;
	this->count = 0;
	this->arr.resize(n);
}

Span::~Span()
{
}

Span::Span(const Span &span)
{
	*this = span;
	return;
}

Span &Span::operator=(const Span &span)
{
	this->arr_len = span.arr_len;
	this->arr = span.arr;
	return (*this);
}

void Span::addNumber(int num)
{
	if (this->count >= this->arr_len)
	{
		throw MemoryException();
	}
	this->arr.push_back(num);
	this->count++;
}

void Span::addNumber(unsigned int st, unsigned int en)
{
	std::vector<int>::iterator start = this->arr.begin() + st;
	std::vector<int>::iterator end = this->arr.begin() + en;

	if (st > en || start >= this->arr.end() || end >= this->arr.end()) // 역순, 벡터범위 넘어섬
	{
		throw MemoryException();
	}
	for (std::vector<int>::iterator it = start; it <= end; it++)
	{
		*it = rand() % 1000000;
		this->count++;
	}
}

void Span::sort()
{
	for (int i = 0; i < this->count - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < this->count; j++)
		{
			if (this->arr[j] < this->arr[min])
				min = j;
		}
		if (i != min)
		{
			int temp = this->arr[i];
			this->arr[i] = this->arr[min];
			this->arr[min] = temp;
		}
	}
}

int Span::shortestSpan()
{
	int span = INT_MAX;
	if (this->count <= 1)
		throw ArrayLackException();
	this->sort();
	for (int i = 0; i < this->count - 1; i++)
	{
		if (this->arr[i + 1] - this->arr[i] < span)
			span = this->arr[i + 1] - this->arr[i];
	}
	return span;
}

int Span::longestSpan()
{
	if (this->count <= 1)
		throw ArrayLackException();
	return *std::max_element(this->arr.begin(), this->arr.end()) - *std::min_element(this->arr.begin(), this->arr.end());
}

std::vector<int> Span::getArr()
{
	return this->arr;
}
