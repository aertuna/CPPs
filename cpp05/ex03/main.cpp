/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 12:39:32 by aertuna           #+#    #+#             */
/*   Updated: 2025/02/28 12:39:33 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    Intern someRandomIntern;
    AForm* form;

    form = someRandomIntern.makeForm("robotomy request", "Bender");
    if (form)
    {
        std::cout << "Form created: " << form->getName() << std::endl;
        delete form;
    }

    form = someRandomIntern.makeForm("shrubbery creation", "Home");
    if (form)
    {
        std::cout << "Form created: " << form->getName() << std::endl;
        delete form;
    }

    form = someRandomIntern.makeForm("presidential pardon", "Alice");
    if (form)
    {
        std::cout << "Form created: " << form->getName() << std::endl;
        delete form;
    }

    form = someRandomIntern.makeForm("unknown form", "Bob");
    if (!form)
    {
        std::cout << "Form creation failed." << std::endl;
    }
    return 0;
}
