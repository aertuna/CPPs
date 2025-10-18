/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 14:07:46 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/27 14:37:26 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called\n";
	this->_value = 0;
}

Fixed::Fixed(Fixed const & input)
{
	std::cout << "Copy constructor called\n";
	this->_value = input.getRawBits();
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits function called\n";
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits function called\n";
	this->_value = raw;
}

Fixed & Fixed::operator=(Fixed const & input)
{
	std::cout << "Copy assignment operator called\n";
	this->_value = input.getRawBits();
	return (*this);
}
