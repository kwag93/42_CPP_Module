#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
	typedef Form *(Intern::*f)(std::string const &);
	struct formType_
	{
		std::string const name;
		f const func;
	};
	Form *makeShrubberyCreationForm_(std::string const &target);
	Form *makeRobotomyRequestForm_(std::string const &target);
	Form *makePresidentialPardonForm_(std::string const &target);

public:
	Intern();
	~Intern();
	Intern(Intern const &other);
	static const formType_ formTypeList_[];
	Intern &operator=(const Intern &other);
	Form *makeForm(std::string name, std::string target);
};

#endif
