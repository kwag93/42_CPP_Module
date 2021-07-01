/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 10:01:24 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/01 16:04:08 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade):name(name)
{
	if(grade < 1)
		throw Bureaucrat::GradeTooLowException();
	if(grade > 150)
		throw Bureaucrat::GradeTooHighException();
	this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(const Bureaucrat & other):name(other.name)
{
	if(other.grade < 1)
		throw Bureaucrat::GradeTooLowException();
	if(other.grade > 150)
		throw Bureaucrat::GradeTooHighException();
	this->grade = other.grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& bureaucrat)
{
	if(bureaucrat.grade < 1)
		throw Bureaucrat::GradeTooLowException();
	if(bureaucrat.grade > 150)
		throw Bureaucrat::GradeTooHighException();
	this->grade = bureaucrat.grade;
	return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "BureaucratException: Grade too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "BureaucratException: Grade too Low";
}

void Bureaucrat::increaseGrade()
{
	if(this->grade == 150)
		throw Bureaucrat::GradeTooHighException();
	this->grade++;
}

void Bureaucrat::decreaseGrade()
{
	if(this->grade == 1)
		throw Bureaucrat::GradeTooLowException();
	this->grade--;
}

std::string Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

void Bureaucrat::signForm(Form &form)
{
	if (form.getSigned())
		std::cout << *this << " cannot sign " << form << " because the form is already signed." <<std::endl;
	else if(this->grade > form.getSignGrade())
		std::cout << *this << " cannot sign " << form << " because grade is low." <<std::endl;
	else
		std::cout << *this << " signs " << form << std::endl;
	form.beSigned(*this);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
 	out<< bureaucrat.getName() <<", bureaucrat grade "<< bureaucrat.getGrade();
	return out;
}

void Bureaucrat::executeForm(Form const & bur)
{
	if (bur.execute(*this))
	{
		std::cout<<this->name<<" executes "<<bur.getName()<<std::endl;
	}
	else
	{
		std::cout<<"failed!"<<std::endl;
	}
}
