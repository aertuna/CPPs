/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 18:11:28 by aertuna           #+#    #+#             */
/*   Updated: 2025/02/28 15:04:49 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bob("Bob", 49);
        Form taxForm("Tax Form", 50, 25);

        std::cout << bob << std::endl;
        std::cout << taxForm << std::endl;

        bob.signForm(taxForm);
        std::cout << taxForm << std::endl;

    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
