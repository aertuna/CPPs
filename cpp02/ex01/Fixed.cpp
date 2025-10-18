/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 14:48:29 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/27 14:37:36 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "default constructor called\n";
	this->_value = 0;
}

Fixed::Fixed(Fixed const & input)
{
	std::cout << "copy constructor called\n";
	this->_value = input._value;
}

Fixed::Fixed(int const input)
{
	std::cout << "int constructor called\n";
	this->_value = input << this->_digits;
}

Fixed::Fixed(float const input)
{
	std::cout << "float constructor called\n";
	this->_value = (int)roundf(input * (1 << this->_digits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits function called\n";
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits function called\n";
	this->_value = raw;
}

Fixed & Fixed::operator=(Fixed const & input)
{
	std::cout << "assignment operator function called\n";
	this->_value = input._value;
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Fixed const & input)
{
	o << input.toFloat();
	return (o);
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->_value / (1 << this->_digits));
}

int		Fixed::toInt( void ) const
{
	return (this->_value >> this->_digits);
}
