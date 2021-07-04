/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:19:18 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/04 12:27:31 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>
# include <stdexcept>

template <typename T>
class Array
{
private:
	T *arr;
	int _size;
public:
	Array():arr(new T[0]()),_size(0){};
	Array(unsigned int n):arr(new T[n]()),_size(n){};
	Array(const Array &array)
	{
		this->arr = new T[array.size()]();
		this->_size = array.size();
		for (size_t i = 0; i < this->size(); i++)
			this->arr[i] = array.arr[i];
	};
	Array &operator=(const Array& array){
		this->arr = new T[array.size()]();
		this->_size = array.size();
		for (size_t i = 0; i < this->size(); i++)
			this->arr[i] = array.arr[i];
		return (*this);
	};
	T& operator[] (int index)
	{
		try
		{
			if(this->_size <= index)
			{
				throw std::overflow_error("overflow");
			}
		}
		catch (std::overflow_error(e))
		{
			std::cout << "overflow" << std::endl;
			return this->arr[this->size() - 1];
		}
		try
		{
			if(index < 0)
				throw std::underflow_error("underflow");
		}
		catch (std::underflow_error(e))
		{
			std::cout << "underflow" << std::endl;
			return this->arr[0];
		}


		return this->arr[index];
	};
	size_t size(void) const {return this->_size;}
};

#endif