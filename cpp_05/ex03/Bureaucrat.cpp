#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name(""), grade(1)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name)
{
	if (other.grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (other.grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = other.grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (bureaucrat.grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = bureaucrat.grade;
	return (*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "BureaucratException: Grade too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "BureaucratException: Grade too Low";
}

void Bureaucrat::increaseGrade()
{
	if (this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void Bureaucrat::decreaseGrade()
{
	if (this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
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
	{
		std::cout << this->name << " cannot sign " << form.getName() << " because the form is already signed." << std::endl;
		return;
	}
	else if (this->grade > form.getSignGrade())
	{
		std::cout << this->name << " cannot sign " << form.getName() << " because grade is low." << std::endl;
		return;
	}
	std::cout << this->name << " signs " << form.getName() << std::endl;
	form.beSigned(*this);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ". ";
	;
	return out;
}

void Bureaucrat::executeForm(Form const &bur)
{
	if (bur.execute(*this))
	{
		std::cout << this->name << " executes " << bur.getName() << std::endl;
	}
	else
	{
		std::cout << "failed!" << std::endl;
	}
}
