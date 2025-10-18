/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 13:31:14 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/12 13:31:29 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::~Weapon() {}


const std::string& Weapon::getType(void) 
{
    return this->_type;
}

void Weapon::setType(std::string newone) 
{
    this->_type = newone;
}