/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 10:08:43 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/08/01 17:47:49 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <queue>
#include  "easyfind.hpp"

int main() {
	int n = 3;

	std::vector<int> v(n);
	// vector [0, 0, 0]으로 초기화
	for (int i = 0; i < n; i++)
		v.push_back(i);
	// vector [0, 0, 0, 0, 1, 2]
	try{
		std::cout << easyfind(v, 1) << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << "cannot find" << std::endl;
	}
	try{
		std::cout << easyfind(v, -1) << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << "cannot find" << std::endl;
	}

	std::deque<int> q;
	for (int i = 0; i < n; i++)
		q.push_back(i);
	try
	{
		std::cout << easyfind(q, 1) << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << "cannot find" << std::endl;
	}
	try
	{
		std::cout << easyfind(q, -1) << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << "cannot find" << std::endl;
	}
	return 0;
}
