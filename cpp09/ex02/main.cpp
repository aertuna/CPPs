/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 12:57:44 by aertuna           #+#    #+#             */
/*   Updated: 2025/05/03 17:03:31 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc < 2)
    {
		std::cerr << "Error" << std::endl;
		return 1;
	}

	PmergeMe sorter;

	try
    {
		sorter.parseInput(argc, argv);
	}
    catch (std::exception &e)
    {
		std::cerr << e.what() << std::endl;
		return 1;
	}

	std::cout << "Before:";
	for (size_t i = 0; i < sorter.getSortedVector().size(); ++i)
		std::cout << " " << sorter.getSortedVector()[i];
	std::cout << std::endl;

	std::clock_t startVec = std::clock();
	sorter.sortVector();
	std::clock_t endVec = std::clock();

	std::clock_t startDeq = std::clock();
	sorter.sortDeque();
	std::clock_t endDeq = std::clock();

	std::cout << "After:";
	for (size_t i = 0; i < sorter.getSortedVector().size(); ++i)
		std::cout << " " << sorter.getSortedVector()[i];
	std::cout << std::endl;

	double timeVec = static_cast<double>(endVec - startVec) * 1000 / CLOCKS_PER_SEC;
	double timeDeq = static_cast<double>(endDeq - startDeq) * 1000 / CLOCKS_PER_SEC;

	std::cout << std::fixed << std::setprecision(5);
	std::cout << "Time to process a range of " << sorter.getSortedVector().size()
	          << " elements with std::vector : " << timeVec << " us" << std::endl;
	std::cout << "Time to process a range of " << sorter.getSortedVector().size()
	          << " elements with std::deque : " << timeDeq << " us" << std::endl;
	return 0;
}
