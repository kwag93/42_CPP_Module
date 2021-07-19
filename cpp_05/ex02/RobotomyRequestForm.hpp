/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 10:04:34 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/19 16:10:47 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <random>

class RobotomyRequestForm : public Form
{
private:
	std::string target;
public:
 	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm & other);
	RobotomyRequestForm &operator=(const RobotomyRequestForm& robotomy);
	virtual bool execute(Bureaucrat const & executor) const;
};

#endif
