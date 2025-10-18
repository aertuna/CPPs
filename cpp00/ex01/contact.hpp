/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:27:12 by aertuna           #+#    #+#             */
/*   Updated: 2024/12/19 15:09:23 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Contact {
private:
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	secret;
	std::string	number;
public:
	const std::string&	get_firstname(void) const;
	const std::string&	get_lastname(void) const;
	const std::string&	get_nickname(void) const;
	const std::string&	get_secret(void) const;
	const std::string&	get_number(void) const;
	void				set_firstname(std::string firstname);
	void				set_lastname(std::string lastname);
	void				set_nickname(std::string nickname);
	void				set_secret(std::string secret);
	void				set_number(std::string number);
};