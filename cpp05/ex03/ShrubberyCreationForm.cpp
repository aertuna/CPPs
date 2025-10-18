/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 12:39:47 by aertuna           #+#    #+#             */
/*   Updated: 2025/02/28 12:47:55 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::action() const
{
    std::ofstream file((target + "_shrubbery").c_str());
    if (file.is_open())
    {
        file << "       _-_\n"
             << "    /~~   ~~\\\n"
             << " /~~         ~~\\\n"
             << "{               }\n"
             << " \\  _-     -_  /\n"
             << "   ~  \\ //  ~\n"
             << "_- -   | | _- _\n"
             << "  _ -  | |   -_\n"
             << "      // \\\n";
        file.close();
        std::cout << "Shrubbery file created: " << target + "_shrubbery" << std::endl;
    }
    else
    {
        std::cerr << "Error: Could not create shrubbery file" << std::endl;
    }
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
    if (!getIsSigned())
        throw FormNotSignedException();
    if (executor.getGrade() > getGradeRequiredToExecute())
        throw GradeTooLowException();
    action();
}
