/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 12:38:43 by aertuna           #+#    #+#             */
/*   Updated: 2025/02/28 15:29:39 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main()
{
    try
    {
        Bureaucrat bob("Bob", 1);
        ShrubberyCreationForm shrubForm("home");
        RobotomyRequestForm roboForm("Alice");
        RobotomyRequestForm roboForm1("Alic");
        RobotomyRequestForm roboForm2("Ali");
        RobotomyRequestForm roboForm3("Al");
        PresidentialPardonForm pardonForm("Pico");

        bob.signForm(shrubForm);
        bob.executeForm(shrubForm);

        bob.signForm(roboForm);
        bob.executeForm(roboForm);

        bob.signForm(roboForm1);
        bob.executeForm(roboForm1);

        bob.signForm(roboForm2);
        bob.executeForm(roboForm2);

        bob.signForm(roboForm3);
        bob.executeForm(roboForm3);

        bob.signForm(pardonForm);
        bob.executeForm(pardonForm);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
