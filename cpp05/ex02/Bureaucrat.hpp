/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 15:08:27 by aertuna           #+#    #+#             */
/*   Updated: 2025/02/28 15:08:28 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
class AForm;

class Bureaucrat
{
    private:
        const std::string name;
        int grade;

    public:
        Bureaucrat(const std::string& name, int grade);
        ~Bureaucrat();

        std::string getName() const;
        int getGrade() const;
        void signForm(AForm& form);
        void executeForm(const AForm& form);

        class GradeTooHighException : public std::exception
        {
            const char* what() const throw();
        };
    
        class GradeTooLowException : public std::exception
        {
            const char* what() const throw();
        };
};

#endif
