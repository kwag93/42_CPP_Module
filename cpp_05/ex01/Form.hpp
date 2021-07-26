/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 18:18:10 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/07/26 18:18:11 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
