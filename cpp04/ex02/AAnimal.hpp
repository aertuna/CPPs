/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:58:56 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/31 16:20:57 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#include <iostream>

class AAnimal {
	public:
		AAnimal();
		AAnimal(std::string const &type);
		AAnimal(AAnimal const &other);
		virtual ~AAnimal() = 0;
		AAnimal			&operator=(AAnimal const &other);
		std::string		getType(void) const;
		virtual void	makeSound() const = 0;

	protected:
		std::string	_type;
};

#endif
