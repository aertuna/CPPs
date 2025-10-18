/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 12:39:27 by aertuna           #+#    #+#             */
/*   Updated: 2025/02/28 12:39:28 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

Intern::Intern() {}

Intern::Intern(const Intern& other)
{
    (void)other;
}

Intern& Intern::operator=(const Intern& other)
{
    (void)other;
    return *this;
}

Intern::~Intern() {}

AForm* createShrubbery(const std::string& target)
{
    return new ShrubberyCreationForm(target);
}

AForm* createRobotomy(const std::string& target)
{
    return new RobotomyRequestForm(target);
}

AForm* createPresidential(const std::string& target)
{
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target)
{
    const std::string formNames[] =
    {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

    AForm* (*formCreators[])(const std::string&) =
    {
        createShrubbery,
        createRobotomy,
        createPresidential
    };

    for (int i = 0; i < 3; ++i)
    {
        if (formName == formNames[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            return formCreators[i](target);
        }
    }

    std::cerr << "Error: Form type '" << formName << "' does not exist!" << std::endl;
    return 0;
}
