/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 10:08:43 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/07 10:43:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <queue>
#include  "easyfind.hpp"

int main() {
	int n = 3;

	std::vector<int> v(n);
	// vector [0, 0, 0]으로 초기화 됌
	for (int i = 0; i < n; i++)
		v.push_back(i);
	// vector [0, 0, 0, 0, 1, 2]
	std::cout << easyfind(v, 1) << std::endl; // 4
	std::cout << easyfind(v, -1) << std::endl; // error -1
	std::cout << std::endl;

	std::deque<int> q;
	for (int i = 0; i < n; i++)
		q.push_back(i);
	// deque 0 1 2
	std::cout << easyfind(q, 1) << std::endl; // 1
	std::cout << easyfind(q, -1) << std::endl; // error -1
	return 0;
}
