/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:39:04 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/31 17:02:56 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog: default constructor called" << std::endl;
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << "Dog: Destructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other), _brain(new Brain(*(other._brain))) {
	std::cout << "Dog: Copy constructor called" << std::endl;
	*this = other;
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "Dog: Asignation operator called" << std::endl;
	if (this != &other){
	this->_type = other.getType();
	*(this->_brain) = *(other._brain);
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "woof!" << std::endl;
}

Brain* Dog::getBrain() const {
    return this->_brain;
}
