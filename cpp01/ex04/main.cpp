/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 13:33:42 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/12 13:34:29 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cerr << "Error: Invalid arguments" << std::endl;
		return (1);
	}
	if (Sed::replace(av[1], av[2], av[3])) {
		return 1;
	}
	return 0;
}