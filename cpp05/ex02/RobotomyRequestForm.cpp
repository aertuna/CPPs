/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 12:38:55 by aertuna           #+#    #+#             */
/*   Updated: 2025/02/28 15:26:40 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : AForm("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::action() const
{
    std::cout << "Bzzzzzt... Drilling noises..." << std::endl;
    if (rand() % 2)
        std::cout << target << " has been successfully robotomized!" << std::endl;
    else
        std::cout << "Robotomy failed on " << target << "!" << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
    if (!getIsSigned())
        throw FormNotSignedException();
    if (executor.getGrade() > getGradeRequiredToExecute())
        throw GradeTooLowException();
    action();
}
