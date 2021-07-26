/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 10:04:36 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/26 11:07:19 by bkwag            ###   ########.fr       */
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
	srand(time(NULL));

	if (executor.getGrade() > this->getExecuteGrade())
		throw Form::GradeTooLowException();
	std::cout << " dudududududdu... dududududududu.. " << std::endl;
	int random = rand() % 100;
	if (random > 50)
	{
		std::cout << this->target << " has been robotomized successfully." << std::endl;
		return true;
	}
	else
	{
		std::cout << this->target << " failed to be robotomize." << std::endl;
		return false;
	}
}
