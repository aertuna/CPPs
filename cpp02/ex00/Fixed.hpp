/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 14:07:32 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/26 14:47:38 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_H
# define FIXED_H
# include <iostream>

class Fixed{

    public:

    	Fixed(Fixed const & input);
	    Fixed(void);
	    ~Fixed(void);


	    int		getRawBits( void ) const;
	    void	setRawBits( int const raw );
	    Fixed & operator=(Fixed const & input);

    private:

	    int	_value;
	    static int const	_digits = 8;

};

#endif
