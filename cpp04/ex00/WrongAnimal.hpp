/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:42:40 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/31 13:03:20 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include "Animal.hpp"
# include <iostream>

class WrongAnimal : public Animal {
public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const &other);
	~WrongAnimal(void);
	WrongAnimal &operator=(WrongAnimal const &other);
	void makeSound() const;
};

#endif
