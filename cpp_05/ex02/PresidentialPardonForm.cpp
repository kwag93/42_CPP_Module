/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 10:04:16 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/01 14:49:1 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):
Form("PresidentialPardonForm", 25, 5), target(target)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & other):
Form(other)
{

}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& president)
{
	this->target = president.target;
	return (*this);
}

bool PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
	return true;
}
