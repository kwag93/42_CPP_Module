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

#include <random>
#include "Base.hpp"

int main(void)
{
	srand(time(NULL));

	for (int i = 0; i < 50; i++)
	{
		Base *o = generate();
		std::cout << "Test " << i << ": ";
		identify(o);
		std::cout << ", ";
		identify(*o);
		std::cout << std::endl;
		delete o;
	}

	return (0);
}
