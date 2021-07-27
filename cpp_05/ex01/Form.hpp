#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
class Form;
#include "Bureaucrat.hpp"

class Form
{
private:
	std::string const name;
	bool is_signed;
	int const signGrade;
	int const executeGrade;

public:
	Form();
	Form(std::string name, int sign, int execute);
	~Form();
	Form(const Form &other);
	Form &operator=(const Form &form);
	std::string const getName() const;
	int getSignGrade() const;
	int getExecuteGrade() const;
	bool getSigned() const;
	void beSigned(Bureaucrat &bur);
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Form const &from);

#endif
