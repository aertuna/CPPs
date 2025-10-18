/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:43:32 by aertuna           #+#    #+#             */
/*   Updated: 2024/12/19 12:39:17 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }

    for (int j = 1; j < argc; ++j)
    {
        for (int i = 0; argv[j][i] != '\0'; ++i)
        {
            char c = argv[j][i];
            if (c >= 'a' && c <= 'z')
                c = c - 'a' + 'A';
            std::cout << c;
        }
    }
    std::cout << std::endl;

    return (0);
}
