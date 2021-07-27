#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &shrubbery);
	virtual bool execute(Bureaucrat const &executor) const;
	class TargetFileOpenException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class WriteException : public std::exception
	{
		virtual const char *what() const throw();
	};
};

#endif
