/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 16:24:47 by aertuna           #+#    #+#             */
/*   Updated: 2025/05/03 17:03:11 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    try
    {
        RPN rpn;
        int result = rpn.calculate(argv[1]);
        std::cout << result << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    return 0;
}
