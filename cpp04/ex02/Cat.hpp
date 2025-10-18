/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:37:30 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/31 15:59:30 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CAT_HPP
#define CAT_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public AAnimal {
    public:
        Cat(void);
        Cat(Cat const &other);
        ~Cat(void);
        Cat &operator=(Cat const &other);
        void makeSound(void) const;

        Brain* getBrain() const;
    private:
        Brain* _brain;
};

#endif

