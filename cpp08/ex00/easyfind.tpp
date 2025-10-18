/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 14:57:35 by aertuna           #+#    #+#             */
/*   Updated: 2025/03/27 15:15:14 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
#define EASYFIND_TPP

NotFoundException::NotFoundException() {}

NotFoundException::NotFoundException(const NotFoundException&) {}

NotFoundException& NotFoundException::operator=(const NotFoundException&)
{
    return *this;
}

NotFoundException::~NotFoundException() throw() {}

const char* NotFoundException::what() const throw()
{
    return "Element not found in container";
}

template <typename T>
typename T::iterator easyfind(T& container, int value)
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw NotFoundException();
    return it;
}

#endif
