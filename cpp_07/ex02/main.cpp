/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:19:26 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/29 13:26:05 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Array.hpp>

#define MAX_VAL 30
int main(int, char **)
{
	Array<int> numbers(MAX_VAL);
	int *mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	
	Array<int> tmp = numbers;
	tmp[0]=100000;
	tmp[MAX_VAL / 2] = 100000;
	Array<int> test(tmp);

	for (int i = 0; i < MAX_VAL; i++)
	{
		std::cout <<i<<" " <<numbers[i] << " " << mirror[i] <<" "<<tmp[i]<<std::endl;
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try //underflow
	{
		numbers[-2] = 0;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try // overflow
	{
		numbers[MAX_VAL] = 0;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	delete[] mirror; //
	system("leaks array");
	return 0;
}
