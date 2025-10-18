/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 14:48:42 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/26 14:48:54 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_H
# define FIXED_H
# include <iostream>
# include <cmath>

class Fixed
{

public:

	Fixed(void);
	Fixed(Fixed const & input);
	Fixed(int const input);
	Fixed(float const input);
	~Fixed(void);


	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	Fixed & operator=(Fixed const & input);
	
	float	toFloat( void ) const;
	int		toInt( void ) const;

private:

	int	_value;
	static int const	_digits = 8;

};

std::ostream & operator<<(std::ostream & o, Fixed const & input);

#endif
