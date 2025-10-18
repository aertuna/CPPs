/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 13:29:03 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/12 13:29:37 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL) {}

HumanB::~HumanB() {}

void HumanB::attack() const 
{
	if (_weapon != NULL)
    {
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
	} 
    else 
    {
		std::cout << this->_name << " doesn't have a weapon to attack." << std::endl;
	}
}

void HumanB::setWeapon(const Weapon& weapon) 
{
	this->_weapon = (Weapon*)&weapon;
}