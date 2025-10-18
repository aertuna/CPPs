/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:39:22 by aertuna           #+#    #+#             */
/*   Updated: 2024/12/19 13:35:58 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

static int is_valid_number(std::string number)
{
    for (size_t i = 0; i < number.length(); ++i)
    {
        if (number[i] != ' ' && (number[i] < '0' || number[i] > '9'))
            return 0;
    }
    return 1;
}

int main()
{
    PhoneBook phonebook;
    std::string data[5];
    std::string input;
    int index;

    while (true)
    {
        std::cout << "\033[1;34mPhoneBook> \033[0;0m";
        std::cin >> input;

        if (input == "ADD")
        {
            std::cout << "\033[1;34m\nEnter Contact Information\033[0;0m" << std::endl;
            std::cout << "First Name: ";
            std::cin >> data[0];
            std::cout << "Last Name: ";
            std::cin >> data[1];
            std::cout << "NickName: ";
            std::cin >> data[2];
            
            do
            {
                std::cout << "Phone Number: ";
                std::cin >> data[3];
                if (is_valid_number(data[3]))
                    break;
                std::cout << "Please input a valid number" << std::endl;
            } while (true);

            std::cout << "Darkest Secret: ";
            std::cin >> data[4];
            
            phonebook.add_contact(data);
            std::cout << "\033[0;32mContact Added Successfully!\033[0;0m\n" << std::endl;
        }
        else if (input == "SEARCH")
        {
            phonebook.display_phonebook();
            std::cout << "\nInsert Index: ";
            std::cin >> index;

            if (std::cin.fail() || index < 0 || index >= phonebook.get_size())
            {
                std::cout << "\033[0;31mInvalid Index!\033[0;0m\n" << std::endl;
                std::cin.clear();
                continue;
            }

            phonebook.display_contact(index);
        }
        else if (input == "EXIT")
        {
            break;
        }
        else
        {
            std::cout << "Invalid command\n" << std::endl;
        }
    }
}
