/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 10:01:24 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/19 15:58:55 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat()
{
	std::cout<<"Default constructor Bureaucrat"<<std::endl;
}

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

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
 	out<< bureaucrat.getName() <<", bureaucrat grade "<< bureaucrat.getGrade();
	return out;
}
