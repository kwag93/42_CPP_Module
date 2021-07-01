/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 10:03:20 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/01 14:49:59 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
class Form;
# include "Bureaucrat.hpp"

class Form
{
private:
	std::string const name;
	bool is_signed;
	int const signGrade;
	int const executeGrade;
public:
 	Form(std::string name, int sign, int execute);
	~Form();
	Form(const Form & other);
	Form &operator=(const Form& form);
	std::string const getName() const;
	int const getSignGrade() const;
	int const getExecuteGrade() const;
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
	class NotSignedException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	virtual bool execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, Form const &from);

#endif