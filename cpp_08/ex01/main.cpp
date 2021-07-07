/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 10:53:45 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/07 11:39:110 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	Span sp = Span(10000);
	try{
		sp.addNumber(0,9999);
	}
	catch(MemoryException &exception)
	{
		std::cout<<exception.what()<<std::endl;
	}

	try{
		std::cout<<"------"<<std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(ArrayLackException &exception)
	{
		std::cout<<exception.what()<<std::endl;
	}
}
