/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 12:38:30 by aertuna           #+#    #+#             */
/*   Updated: 2025/02/28 12:38:31 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <stdexcept>
#include <fstream>
#include <cstdlib>

AForm::AForm(const std::string& name, int gradeSign, int gradeExec)
    : name(name), isSigned(false), gradeRequiredToSign(gradeSign), gradeRequiredToExecute(gradeExec)
{
    if (gradeSign < 1 || gradeExec < 1)
        throw GradeTooHighException();
    if (gradeSign > 150 || gradeExec > 150)
        throw GradeTooLowException();
}

AForm::~AForm() {}

std::string AForm::getName() const { return name; }
bool AForm::getIsSigned() const { return isSigned; }
int AForm::getGradeRequiredToSign() const { return gradeRequiredToSign; }
int AForm::getGradeRequiredToExecute() const { return gradeRequiredToExecute; }

void AForm::beSigned(const Bureaucrat& b)
{
    if (b.getGrade() > gradeRequiredToSign)
        throw GradeTooLowException();
    isSigned = true;
}

void AForm::execute(const Bureaucrat& executor) const
{
    if (!isSigned)
        throw FormNotSignedException();
    if (executor.getGrade() > gradeRequiredToExecute)
        throw GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high!";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low!";
}

const char* AForm::FormNotSignedException::what() const throw()
{
    return "Form is not signed!";
}

std::ostream& operator<<(std::ostream& os, const AForm& form)
{
    os << "Form " << form.getName() << " (signed: " << (form.getIsSigned() ? "yes" : "no")
       << ", grade required to sign: " << form.getGradeRequiredToSign()
       << ", grade required to execute: " << form.getGradeRequiredToExecute() << ")";
    return os;
}
