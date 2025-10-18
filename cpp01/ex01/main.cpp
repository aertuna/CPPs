/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 13:22:56 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/12 14:37:00 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int size = 10;
	Zombie *zhorde;
	zhorde = zombieHorde(size, "Pico");
	for (int i = 0; i < size; i++) zhorde[i].announce();
	delete[] zhorde;
}