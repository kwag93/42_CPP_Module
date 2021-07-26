/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 18:16:55 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/26 18:16:55 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat francis("Francis", 100);
	std::cout << francis << std::endl;
	francis.increaseGrade();
	std::cout << francis << std::endl;
	francis.decreaseGrade();
	std::cout << francis << std::endl;

	try
	{
		Bureaucrat jack("Jack", 0);
		std::cout << jack << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat jack("Jack", 1000);
		std::cout << jack << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat jack("Jack", 1);
		std::cout << jack << std::endl;
		jack.increaseGrade();
		std::cout << jack << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat jack("Jack", 150);
		std::cout << jack << std::endl;
		jack.decreaseGrade();
		std::cout << jack << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
