/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 13:35:44 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/12 13:35:54 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>

class Sed
{
private:
    std::string _in;
    std::string _out;

public:
    Sed();
    ~Sed();

    static int  replace(std::string filename,std::string s1, std::string s2);
};

#endif