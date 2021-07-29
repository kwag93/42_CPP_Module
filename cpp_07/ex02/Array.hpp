/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:19:18 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/29 13:27:12 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
private:
	T *arr;
	unsigned int _size;

public:
	Array() : arr(new T[0]), _size(0){};
	Array(unsigned int n) : arr(new T[n]), _size(n){};
	Array(const Array &array)
	{
		this->arr = new T[array.size()]();
		this->_size = array.size();
		for (size_t i = 0; i < this->size(); i++)
			this->arr[i] = array.arr[i];
	};
	Array &operator=(const Array &array)
	{
		if (this->arr)
			delete[] this->arr;
		this->arr = new T[array.size()];
		this->_size = array.size();
		for (size_t i = 0; i < this->size(); i++)
			this->arr[i] = array.arr[i];
		return (*this);
	};
	T &operator[](unsigned int index)
	{
		if (this->_size <= index)
		{
			throw std::exception();
		}
		return this->arr[index];
	};
	size_t size(void) const { return this->_size; }
};

#endif
