/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 14:11:03 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/31 15:08:23 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain: Default constructor called" << std::endl;
}

Brain::~Brain(void) {
	std::cout << "Brain: Destructor called" << std::endl;
}

Brain::Brain(Brain const &other) {
	std::cout << "Brain: Copy constructor called" << std::endl;
	*this = other;
}

Brain &Brain::operator=(Brain const &other) {
	std::cout << "Brain: Assignment operator called" << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; ++i) {
			_ideas[i] = other._ideas[i];
		}
	}
	return *this;
}

void Brain::setIdea(int index, const std::string& idea) {
	if (index >= 0 && index < 100) {
		_ideas[index] = idea;
	}
}

std::string Brain::getIdea(int index) const {
	if (index >= 0 && index < 100) {
		return _ideas[index];
	}
	return "";
}
