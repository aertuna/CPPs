/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:21:11 by aertuna           #+#    #+#             */
/*   Updated: 2025/03/13 18:45:32 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void printInt(int &n)
{
    std::cout << n << " ";
}

void increment(int &n)
{
    n += 1;
}

void printString(std::string &str)
{
    std::cout << str << " ";
}

int main()
{
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intLen = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Original intArray: ";
    iter(intArray, intLen, printInt);
    std::cout << std::endl;

    iter(intArray, intLen, increment);
    std::cout << "Incremented intArray: ";
    iter(intArray, intLen, printInt);
    std::cout << std::endl;

    std::string strArray[] = {"Hello", "World", "Pico"};
    size_t strLen = sizeof(strArray) / sizeof(strArray[0]);

    std::cout << "String array: ";
    iter(strArray, strLen, printString);
    std::cout << std::endl;

    return 0;
}
