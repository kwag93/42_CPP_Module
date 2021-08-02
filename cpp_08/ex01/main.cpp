/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 10:53:45 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/08/01 17:46:25 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	srand(time(NULL));
	Span sp = Span(10000);
	try{
		sp.addNumber(0, 9999);
	}
	catch(std::exception &e){
		std::cout<<e.what()<<std::endl;
	}
	try{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << "----------------" << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::vector<int> arr = sp.getArr();
		for(size_t i=0; i < arr.size(); i++)
		{
			std::cout<<arr[i]<<std::endl;
		}
	}
	catch(std::exception &e){
		std::cout<<e.what()<<std::endl;
	}
}
