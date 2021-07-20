/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 10:24:59 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/20 15:34:03 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data
{
private:
	std::string str1;
	std::string str2;
	int num;

public:
	Data();
	Data(std::string str1, std::string str2, int num);
	~Data();
	Data(const Data &other);
	Data &operator=(const Data &president);
	std::string getStr1() const;
	std::string getStr2() const;
	int getNum() const;
};
uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);

#endif
