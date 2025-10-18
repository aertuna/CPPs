/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 13:31:46 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/12 13:31:54 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon{
private:
    std::string _type;

public:
    Weapon(std::string type);
    ~Weapon();
    const std::string& getType(void);
    void  setType(std::string newone);
};

#endif