/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 10:23:54 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/04 10:46:32 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
	srand(time(NULL));
	Data *data = new Data();
	for (int i = 0; i < 5; i++)
	{
		std::cout << "test " << i << ": " << '\n';
		void *raw = data->serialize();
		Data *temp = data->deserialize(raw);

		std::cout << "\tstr1: " << temp->str1 << '\n';
		std::cout << "\tn:    " << temp->num <<'\n';
		std::cout << "\tstr2: " << temp->str2 << std::endl;

	}
	delete data;
	return (0);
}
