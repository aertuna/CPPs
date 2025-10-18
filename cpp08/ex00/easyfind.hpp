/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 14:57:33 by aertuna           #+#    #+#             */
/*   Updated: 2025/03/27 15:15:36 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <exception>
#include <algorithm>

class NotFoundException : public std::exception
{
    public:
        NotFoundException();
        NotFoundException(const NotFoundException&);
        NotFoundException& operator=(const NotFoundException&);
        virtual ~NotFoundException() throw();
        
        virtual const char* what() const throw();
};

template <typename T>
typename T::iterator easyfind(T& container, int value);

#include "easyfind.tpp"

#endif
