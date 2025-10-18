/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 13:37:45 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/25 14:43:47 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void ) {

    std::string in;
    Harl        harl;

        std::cout << "Enter a level: ";
        std::cin >> in;
        harl.complain(in);

    return 0;
}