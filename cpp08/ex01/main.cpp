/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 14:55:38 by aertuna           #+#    #+#             */
/*   Updated: 2025/04/29 13:54:46 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main()
{
    try
    {
        Span sp(5);
        
        try
        {
            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
            sp.addNumber(15);
        }
        catch (const std::exception& e)
        {
            std::cerr << "Error: " << e.what() << std::endl;
        }
        
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try
    {
        std::cout << std::endl;
        std::cout << "+-----------------------+" << std::endl;
        std::cout << "|Test with 10000 numbers|" << std::endl;
        std::cout << "+-----------------------+" << std::endl;
        std::cout << std::endl;
        unsigned int testSize = 10000;
        Span bigSpan(testSize);

        std::srand(std::time(0));
        std::vector<int> numbers;
        for (unsigned int i = 0; i < testSize; ++i)
        {
            int num = std::rand();
            numbers.push_back(num);
        }

        try
        {
            bigSpan.addRange(numbers.begin(), numbers.end());
        }
        catch (const std::exception& e)
        {
            std::cerr << "Error: " << e.what() << std::endl;
        }

        std::cout << "10000+ Test - Shortest Span: " << bigSpan.shortestSpan() << std::endl;
        std::cout << "10000+ Test - Longest Span: " << bigSpan.longestSpan() << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
