/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 10:25:01 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/04 10:38:19 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

void *Data::serialize(void)
{
	char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	std::string new_name;
	int len;

	len = rand() % 4 + 4;
	for(int i = 0; i < len; i++)
	{
		new_name += alpha[rand() % 26];
	}
	this->str1 = new_name;
	this->num = rand() % 100000;
	len = rand() % 7 + 4;
	new_name = "";
	for(int i = 0; i < len; i++)
	{
		new_name += alpha[rand() % 26];
	}
	this->str2 = new_name;
	return (void *)this;
}

Data *Data::deserialize(void * raw)
{
	return (Data *)raw;
}
