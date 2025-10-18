/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:37:30 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/31 13:03:15 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include <iostream>


class Cat : public Animal {
	public:
		Cat(void);
		Cat(Cat const &other);
		~Cat(void);
		Cat &operator=(Cat const &other);
		void makeSound() const;
};

#endif
