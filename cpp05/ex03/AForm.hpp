/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 12:39:19 by aertuna           #+#    #+#             */
/*   Updated: 2025/02/28 12:39:20 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        bool isSigned;
        const int gradeRequiredToSign;
        const int gradeRequiredToExecute;

    public:
        AForm(const std::string& name, int signGrade, int execGrade);
        virtual ~AForm();

        std::string getName() const;
        bool getIsSigned() const;
        int getGradeRequiredToSign() const;
        int getGradeRequiredToExecute() const;

        void beSigned(const Bureaucrat& b);
        virtual void execute(const Bureaucrat& executor) const = 0;

        class GradeTooHighException : public std::exception
        {
            const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            const char* what() const throw();
        };

        class FormNotSignedException : public std::exception
        {
            const char* what() const throw();
        };
};

#endif
