/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:37:07 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/31 13:04:35 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	this->_type = "Cat";
	std::cout << "Cat: default constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat: destructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
	std::cout << "Cat: copy constructor called" << std::endl;
	*this = other;
}

void Cat::makeSound() const {
	std::cout << "Miyav!" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "cat: assignation operator called" << std::endl;
	if (this != &other){
	this->_type = other.getType();
	}
	return *this;
}
