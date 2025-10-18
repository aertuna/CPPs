/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:31:53 by aertuna           #+#    #+#             */
/*   Updated: 2025/03/11 14:54:00 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
    Base* randomInstance = generate();

    std::cout << "With Pointer : ";
    identify(randomInstance);

    std::cout << "With Reference: ";
    identify(*randomInstance);

    delete randomInstance;
    return 0;
}
