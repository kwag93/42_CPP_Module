/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:27:34 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/02 15:34:17 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout<<"Error occurred"<<std::endl;
	}
	else
	{
		Scalar scalar(argv[1]);
		scalar.Print();
		std::cout << "\n";
	}
}
