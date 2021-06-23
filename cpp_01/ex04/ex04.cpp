/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 10:48:37 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/23 10:53:16 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *str_pointer = &str;
	std::string &str_refer = str;
	std::cout << str << std::endl;
	std::cout << *str_pointer << std::endl;
	std::cout << str_refer << std::endl;
	return 0;
}
