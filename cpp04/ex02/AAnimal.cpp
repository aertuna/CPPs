/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:58:38 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/31 16:04:37 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("") {
	std::cout << "AAnimal: Default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string const &type) : _type(type) {
	std::cout << "AAnimal: Parametrized constructor called" << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal: Destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) {
	std::cout << "AAnimal: Copy constructor called" << std::endl;
	*this = other;
}

AAnimal &AAnimal::operator=(const AAnimal &other) {
	std::cout << "AAnimal: Assignment operator called" << std::endl;
	if (this != &other){
		this->_type = other.getType();
	}
	return *this;
}

std::string AAnimal::getType() const {
	return this->_type;
}
