/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 16:19:38 by aertuna           #+#    #+#             */
/*   Updated: 2025/03/13 18:08:18 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    try
    {
        Array<int> arr1;
        std::cout << "arr1 size: " << arr1.size() << std::endl;

        Array<int> arr2(10);
        std::cout << "arr2 size: " << arr2.size() << std::endl;

        for (unsigned int i = 0; i < arr2.size(); ++i)
        {
            arr2[i] = i + 1;
        }

        std::cout << "arr2 elements: ";
        for (unsigned int i = 0; i < arr2.size(); ++i)
        {
            std::cout << arr2[i] << "   ";
        }
        std::cout << std::endl;

        Array<int> arr3 = arr2;
        std::cout << "arr3 elements (copied from arr2): ";
        for (unsigned int i = 0; i < arr3.size(); ++i)
        {
            std::cout << arr3[i] << "   ";
        }
        std::cout << std::endl;

        Array<int> arr4(3);
        arr4 = arr2;
        std::cout << "arr4 elements (assigned from arr2): ";
        for (unsigned int i = 0; i < arr4.size(); ++i)
        {
            std::cout << arr4[i] << "   ";
        }
        std::cout << std::endl;

        try
        {
            std::cout << arr2[10] << std::endl;
        }
        catch (const std::out_of_range& e)
        {
            std::cerr << "Error: " << e.what() << std::endl;
        }

        const Array<int> constArr(3);
        std::cout << "constArr size: " << constArr.size() << std::endl;
        // constArr[0] = 5;
        std::cout << "constArr[0]: " << constArr[0] << std::endl;

        Array<double> arrDouble(5);
        std::cout << "arrDouble size: " << arrDouble.size() << std::endl;

        for (unsigned int i = 0; i < arrDouble.size(); ++i)
        {
            arrDouble[i] = (i + 1) * 1.5;
        }

        std::cout << "arrDouble elements: ";
        for (unsigned int i = 0; i < arrDouble.size(); ++i)
        {
            std::cout << arrDouble[i] << "   ";
        }
        std::cout << std::endl;
        
        Array<std::string> arrString(3);
        std::cout << "arrString size: " << arrString.size() << std::endl;

        arrString[0] = "Hello";
        arrString[1] = "World";
        arrString[2] = "Pico";

        std::cout << "arrString elements: ";
        for (unsigned int i = 0; i < arrString.size(); ++i)
        {
            std::cout << arrString[i] << " ";
        }
        std::cout << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "General Error: " << e.what() << std::endl;
    }

    return 0;
}
