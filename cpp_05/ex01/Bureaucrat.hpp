/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 10:01:22 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/01 11:52:39 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <exception>
class Bureaucrat;
# include "Form.hpp"

class Bureaucrat
{
private:
	std::string const name;
	int grade;
public:
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat & other);
	Bureaucrat &operator=(const Bureaucrat& bureaucrat);
	void increaseGrade();
	void decreaseGrade();
	std::string getName() const;
	int getGrade() const;
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
	void signForm(Form &form);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif
