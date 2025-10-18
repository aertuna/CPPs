/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 13:08:32 by aertuna           #+#    #+#             */
/*   Updated: 2025/05/03 16:18:14 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &other) : vec(other.vec), deq(other.deq) {}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
	if (this != &other)
	{
		vec = other.vec;
		deq = other.deq;
	}
	return *this;
}

PmergeMe::~PmergeMe() {}

void PmergeMe::parseInput(int argc, char **argv)
{
	for (int i = 1; i < argc; ++i)
	{
		std::string arg(argv[i]);
		for (size_t j = 0; j < arg.length(); ++j)
		{
			if (!isdigit(arg[j]))
				throw std::invalid_argument("Error");
		}
		std::istringstream iss(arg);
		int num;
		iss >> num;
		if (num < 0)
			throw std::invalid_argument("Error");
		vec.push_back(num);
		deq.push_back(num);
	}
}

void swapInts(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void mergeInsertDeque(std::deque<int> &deq)
{
	if (deq.size() <= 1)
		return;

	std::deque<int> mainChain;
	std::deque<int> pendings;

	size_t i;
	for (i = 0; i + 1 < deq.size(); i += 2)
	{
		int first = deq[i];
		int second = deq[i + 1];
		if (first > second)
			swapInts(first, second);

		mainChain.push_back(second);
		pendings.push_back(first);
	}

	if (deq.size() % 2 != 0)
		pendings.push_back(deq.back());

	std::sort(mainChain.begin(), mainChain.end());

	for (i = 0; i < pendings.size(); ++i)
	{
		std::deque<int>::iterator it = mainChain.begin();
		while (it != mainChain.end() && *it < pendings[i])
			++it;
		mainChain.insert(it, pendings[i]);
	}

	deq = mainChain;
}

void mergeInsertVector(std::vector<int> &vec)
{
	if (vec.size() <= 1)
		return;

	std::vector<int> mainChain;
	std::vector<int> pendings;

	size_t i;
	for (i = 0; i + 1 < vec.size(); i += 2)
	{
		int first = vec[i];
		int second = vec[i + 1];
		if (first > second)
			swapInts(first, second);

		mainChain.push_back(second);
		pendings.push_back(first);
	}

	if (vec.size() % 2 != 0)
		pendings.push_back(vec.back());

	std::sort(mainChain.begin(), mainChain.end());

	for (i = 0; i < pendings.size(); ++i)
	{
		std::vector<int>::iterator it = mainChain.begin();
		while (it != mainChain.end() && *it < pendings[i])
			++it;
		mainChain.insert(it, pendings[i]);
	}

	vec = mainChain;
}

void PmergeMe::sortVector()
{
	mergeInsertVector(vec);
}

void PmergeMe::sortDeque()
{
	mergeInsertDeque(deq);
}

const std::vector<int>& PmergeMe::getSortedVector() const
{
	return vec;
}
