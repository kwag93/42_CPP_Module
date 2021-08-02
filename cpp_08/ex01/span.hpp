/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 11:07:10 by bkwag             #+#    #+#             */
/*   Updated: 2021/08/02 11:07:11 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>

class MemoryException : public std::exception
{
public:
	virtual const char *what() const throw()
	{
		return "Array overflow";
	}
};

class ArrayLackException : public std::exception
{
public:
	virtual const char *what() const throw()
	{
		return "Array has less than two elements.";
	}
};

class Span
{
private:
	std::vector<int> arr;
	int arr_len;
	int count;

public:
	Span();
	Span(unsigned int n);
	~Span();
	Span(const Span &span);
	Span &operator=(const Span &span);
	void addNumber(int num);
	void addNumber(unsigned int start, unsigned int end);
	void sort();
	int shortestSpan();
	int longestSpan();
	std::vector<int> getArr();
};

#endif
