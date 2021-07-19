/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 10:04:51 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/19 16:10:31 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string target;
public:
 	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm & other);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm& shrubbery);
	virtual bool execute(Bureaucrat const & executor) const;
	class TargetFileOpenException: public std::exception {
		virtual const char* what() const throw();
	};
	class WriteException: public std::exception {
		virtual const char* what() const throw();
	};
};

#endif
