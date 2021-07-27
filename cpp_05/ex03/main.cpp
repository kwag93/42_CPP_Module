#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void _test_intern(std::string const &name, std::string const &target)
{
	Intern someRandomIntern;
	Form *rrf;
	Bureaucrat bure("Kobayashi", 60);

	rrf = someRandomIntern.makeForm(name, target);

	if (rrf)
	{
		try
		{
			std::cout << bure;
			bure.signForm(*rrf);
			std::cout << *rrf << std::endl;
			bure.executeForm(*rrf);
			std::cout << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
			std::cout << std::endl;
		}
	}
}

int main()
{
	srand(time(NULL));

	std::cout << "<SHURUBBERY TESTS>" << std::endl;
	_test_intern("shrubbery creation", "Bender");
	_test_intern("robotomy request", "Bender");
	_test_intern("presidential pardon", "Bender");
	_test_intern("nothing form", "Bender");
	return 0;
}
