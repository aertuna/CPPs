/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:39:18 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/31 13:03:17 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include <iostream>

class Dog : public Animal {
	public:
		Dog(void);
		Dog(Dog const &other);
		~Dog(void);
		Dog &operator=(Dog const &other);
		void makeSound() const;
};

#endif
