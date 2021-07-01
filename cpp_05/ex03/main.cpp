/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 10:01:26 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/01 16:07:14 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void    _test_intern(std::string const& name, std::string const& target) {
    Intern      someRandomIntern;
    Form*       rrf;
    Bureaucrat  bure("Akira", 1);

    rrf = someRandomIntern.makeForm(name, target);

    if (rrf) {
        std::cout << bure;
        bure.signForm(*rrf);
        std::cout << *rrf <<std::endl;
        bure.executeForm(*rrf);
        std::cout << std::endl;
    }
}

int main() {
    std::cout << "<SHURUBBERY TESTS>" << std::endl;
    _test_intern("shrubbery creation", "Bender");
    _test_intern("robotomy request", "Bender");
    _test_intern("presidential pardon", "Bender");
    _test_intern("nothing form", "Bender");
    return 0;
}
