/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:27:34 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/28 15:32:10 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Error occurred" << std::endl;
	}
	else
	{
		Scalar scalar(argv[1]);
		scalar.PrintChar();
		scalar.PrintInt();
		scalar.PrintFloat();
		scalar.PrintDouble();
	}
	return 0;
}
