/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 18:21:27 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/27 10:59:41 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), target("")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &president)
{
	this->target = president.target;
	return (*this);
}

bool RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSigned())
		throw Form::NotSignedException();
	if(this->getExecuteGrade() < executor.getGrade())
		throw Bureaucrat::GradeTooLowException();
	std::cout << " dudududududdu... dududududududu.. " << std::endl;
	int random = rand() % 100;
	if (random > 50)
	{
		std::cout << this->target << " has been robotomized successfully." << std::endl;
	}
	else
	{
		std::cout << this->target << " failed to be robotomize." << std::endl;
	}
	return true;
}
