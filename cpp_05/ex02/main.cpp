/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 10:01:26 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/26 11:223:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void _test_shrubbery(std::string const &name_bure,
					 int grade, std::string const &target)
{
	try
	{
		std::cout << name_bure << "'s test" << std::endl;

		Bureaucrat bure(name_bure, grade);
		ShrubberyCreationForm form(target);

		form.beSigned(bure);
		std::cout << form << std::endl;
		form.execute(bure);
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
		std::cout << std::endl;
	}
}

void _test_robotomy(std::string const &name_bure,
					int grade, std::string const &target)
{
	try
	{
		std::cout << name_bure << "'s test" << std::endl;

		Bureaucrat bure(name_bure, grade);
		RobotomyRequestForm form(target);

		form.beSigned(bure);
		std::cout << form << std::endl;
		form.execute(bure);
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
		std::cout << std::endl;
	}
}

void _test_presidential(std::string const &name_bure,
						int grade, std::string const &target)
{
	try
	{
		std::cout << name_bure << "'s test" << std::endl;

		Bureaucrat bure(name_bure, grade);
		PresidentialPardonForm form(target);

		form.beSigned(bure);
		std::cout << form << std::endl;
		form.execute(bure);
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
		std::cout << std::endl;
	}
}

void _test_bure(std::string const &name_bure, int grade,
				std::string const &target)
{

	std::cout << name_bure << "'s test" << std::endl;

	Bureaucrat bure(name_bure, grade);
	ShrubberyCreationForm shrubbery(target);
	RobotomyRequestForm robotomy(target);
	PresidentialPardonForm presidential(target);

	try
	{
		bure.signForm(shrubbery);
		bure.executeForm(shrubbery);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
		std::cout << std::endl;
	}
	try
	{
		bure.signForm(robotomy);
		bure.executeForm(robotomy);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
		std::cout << std::endl;
	}

	try
	{
		bure.signForm(presidential);
		bure.executeForm(presidential);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
		std::cout << std::endl;
	}
}

int main()
{
	std::cout << "<SHURUBBERY TESTS>" << std::endl;
	_test_shrubbery("Akira", 10, "test1");
	_test_shrubbery("Tetsuo", 140, "test2");
	_test_shrubbery("Kiyoko", 150, "test3"); // 150까지 가능. 테스트가 3개라 트리 3개 생성
	_test_shrubbery("A", 999, "test4");
	_test_shrubbery("B", -999, "test5");

	std::cout << "<ROBOTOMY TESTS>" << std::endl;
	_test_robotomy("Akira", 10, "test11");
	_test_robotomy("Tetsuo", 45, "test22");
	_test_robotomy("Kiyoko", 60, "test33");
	_test_robotomy("A", 999, "test44");
	_test_robotomy("B", -999, "test55");

	std::cout << "<PRESIDENTIAL TESTS>" << std::endl;
	_test_presidential("Akira", 1, "test111");
	_test_presidential("Tetsuo", 10, "test222");
	_test_presidential("Kiyoko", 60, "test333");
	_test_presidential("A", 999, "test444");
	_test_presidential("B", -999, "test555");

	std::cout << "<BUREAUCRAT TESTS>" << std::endl;
	_test_bure("Tetsuo", 140, "test1111");
	_test_bure("Kiyoko", 60, "test2222");
	_test_bure("Tetsuo", 10, "test3333");
	return 0;
}
