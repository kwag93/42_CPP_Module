#include "Form.hpp"

Form::Form() : name(""), is_signed(false), signGrade(149), executeGrade(149)
{
}

Form::Form(std::string name, int sign, int execute) : name(name), is_signed(false), signGrade(sign), executeGrade(execute)
{
	if (sign < 1 || execute < 1)
		throw Form::GradeTooHighException();
	if (sign > 150 || execute > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
}

Form::Form(const Form &other) : name(other.name), signGrade(other.signGrade), executeGrade(other.executeGrade)
{
	if (this->signGrade < 1 || this->executeGrade < 1)
		throw Form::GradeTooHighException();
	if (this->signGrade > 150 || this->executeGrade > 150)
		throw Form::GradeTooLowException();
}

Form &Form::operator=(const Form &form)
{
	this->is_signed = form.is_signed;
	if (this->signGrade < 1 || this->executeGrade < 1)
		throw Form::GradeTooHighException();
	if (this->signGrade > 150 || this->executeGrade > 150)
		throw Form::GradeTooLowException();
	return (*this);
}

std::string const Form::getName() const
{
	return this->name;
}

int Form::getSignGrade() const
{
	return this->signGrade;
}

int Form::getExecuteGrade() const
{
	return this->executeGrade;
}

bool Form::getSigned() const
{
	return this->is_signed;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "FormException: Grade too High";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "FormException: Grade too Low";
}

const char *Form::NotSignedException::what() const throw()
{
	return "FormException: Not signed";
}

void Form::beSigned(Bureaucrat &bur)
{
	if (this->signGrade >= bur.getGrade())
		this->is_signed = 1;
	else
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, Form const &form)
{
	out << "(" << form.getName() << "), sign grade : "
		<< form.getSignGrade() << ", execute grade : " << form.getExecuteGrade()
		<< ", signed : " << form.getSigned();

	return out;
}
