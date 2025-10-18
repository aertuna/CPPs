/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:37:07 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/31 17:02:14 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    this->_type = "Cat";
    this->_brain = new Brain();
    std::cout << "Cat: Default constructor called" << std::endl;
}

Cat::~Cat() {
    delete this->_brain;
    std::cout << "Cat: Destructor called" << std::endl;
}

Cat::Cat(const Cat &other) : AAnimal(other), _brain(new Brain(*(other._brain))) {
    std::cout << "Cat: Copy constructor called" << std::endl;
    *this = other;
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << "Cat: Assignment operator called" << std::endl;
    if (this != &other) {
        this->_type = other.getType();
        *(this->_brain) = *(other._brain);
    }
    return *this;
}

void Cat::makeSound() const {
    std::cout << "meow!" << std::endl;
}

Brain* Cat::getBrain() const {
    return this->_brain;
}
