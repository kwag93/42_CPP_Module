/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:08:38 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/26 11:30:01 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::formType_ const Intern::formTypeList_[] =
	{
		{"shrubbery creation", &Intern::makeShrubberyCreationForm_},
		{"presidential pardon", &Intern::makePresidentialPardonForm_},
		{"robotomy request", &Intern::makeRobotomyRequestForm_},
};

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(Intern const &other)
{
	(void)other;
}

Intern &Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}

Form *Intern::makeShrubberyCreationForm_(std::string const &target)
{
	return new ShrubberyCreationForm(target);
}

Form *Intern::makeRobotomyRequestForm_(std::string const &target)
{
	return new RobotomyRequestForm(target);
}
Form *Intern::makePresidentialPardonForm_(std::string const &target)
{
	return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string name, std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		if (name == Intern::formTypeList_[i].name)
		{
			std::cout << "Intern creates " << formTypeList_[i].name << std::endl;
			return (this->*(formTypeList_[i].func))(target);
		}
	}
	std::cout << "Intern cannot create " << name << std::endl;
	return (NULL);
}
