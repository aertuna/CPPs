/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 12:58:06 by aertuna           #+#    #+#             */
/*   Updated: 2025/05/03 16:20:46 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <algorithm> 
#include <vector>
#include <deque>
#include <ctime>
#include <cstdlib>
#include <stdexcept>
#include <iomanip>
#include <sstream>
#include <string>

class PmergeMe
{
	private:
		std::vector<int> vec;
		std::deque<int> deq;

	public:
		PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);
		~PmergeMe();

		void parseInput(int argc, char **argv);
		void sortVector();
		void sortDeque();

		const std::vector<int>& getSortedVector() const;
};

void mergeInsertVector(std::vector<int>& vec);
void mergeInsertDeque(std::deque<int>& deq);

#endif
