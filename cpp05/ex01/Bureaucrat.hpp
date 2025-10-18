/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 18:09:52 by aertuna           #+#    #+#             */
/*   Updated: 2025/02/28 14:36:29 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Form.hpp"
#include <iostream>
#include <stdexcept>
#include <string>

class Form;

class Bureaucrat
{
    private:
        const std::string name;
        int grade;

    public:
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
    
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

    Bureaucrat(const std::string& name, int grade);
    ~Bureaucrat();
    
    std::string getName() const;
    int getGrade() const;
    
    void incrementGrade();
    void decrementGrade();
    void signForm(Form& form);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
