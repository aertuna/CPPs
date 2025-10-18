/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:36:42 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/31 13:03:08 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal {
	public:
		Animal(void);
		Animal(std::string const &type);
		Animal(Animal const &other);
		virtual ~Animal(void);
		Animal			&operator=(Animal const &other);
		std::string		getType(void) const;
		virtual void	makeSound(void) const;

	protected:
		std::string	_type;
};

#endif
