/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 11:07:00 by bkwag             #+#    #+#             */
/*   Updated: 2021/08/02 11:07:00 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	srand(time(NULL));
	Span sp = Span(10000); // short를 위해 5
	try
	{
		sp.addNumber(0, 9999); // short 를 위해 4로 지정해서 보기
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << "----------------" << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::vector<int> arr = sp.getArr();
		// for (size_t i = 0; i < arr.size(); i++)
		// {
		// 	std::cout << arr[i] << std::endl;
		// }
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
