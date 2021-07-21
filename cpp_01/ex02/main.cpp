/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 10:48:37 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/21 13:49:38 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	std::cout << &str << std::endl;
	std::cout << &stringPTR << std::endl; // string 을 가리키지만 string 주소를 따로 저장해놓음
	std::cout << &stringREF << std::endl; // string 의 별칭이라고 생각할 수 있음.
	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	return 0;
}
