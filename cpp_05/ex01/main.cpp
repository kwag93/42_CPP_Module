#include <iostream>
#include "Bureaucrat.hpp"

void _test(std::string const &name_bure, int grade,
		   std::string const &name_form, int sign_grade, int exec_grade)
{
	try
	{
		std::cout << name_bure << "'s test" << std::endl;

		Bureaucrat bure(name_bure, grade);
		Form form(name_form, sign_grade, exec_grade);
		std::cout << bure << std::endl;
		bure.signForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
		std::cout << std::endl;
	}
}

int main()
{
	std::cout << "<TEST FORM>" << std::endl;
	_test("Kirito", 10, "test1", 100, 100);
	_test("Asuna", 100, "test1", 10, 10);
	_test("Sinnosuke", 100, "test1", -10, 10);
	_test("Sinichi", 100, "test1", 10, -10);
	_test("Edogawa", 100, "test1", 10, 999);
	_test("Taichi", 100, "test1", 999, 10);
	_test("Tohru", 999, "test1", 999, 999);
	_test("Kanna", -999, "test1", 999, 999);
	_test("Saitama", 100, "test1", -999, -999);
	return 0;
}
