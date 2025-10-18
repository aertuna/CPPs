/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 13:05:03 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/12 13:54:02 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie zombie1("Foo");
    Zombie *zombie2 = newZombie("Doo");
    zombie2->announce();
    delete zombie2;
    randomChump("Boo");
    return 0;
}