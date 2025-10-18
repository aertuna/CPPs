/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 13:25:27 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/25 13:46:04 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
        return NULL;
    Zombie *Zombiehorde = new Zombie[N];
    for (int i = 0; i < N; i++) {
		Zombiehorde[i].setName(name);
	}
    return Zombiehorde;
}