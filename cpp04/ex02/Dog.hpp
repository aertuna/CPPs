/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:39:18 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/31 15:59:51 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOG_HPP
#define DOG_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public AAnimal {
    public:
        Dog(void);
        Dog(Dog const &other);
        ~Dog(void);
        Dog &operator=(Dog const &other);
        void makeSound(void) const;

        Brain* getBrain() const;
    private:
        Brain* _brain;
};

#endif
