/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 14:11:24 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/31 16:59:38 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain {
	public:
		Brain(void);
		Brain(Brain const &other);
		~Brain(void);
		Brain &operator=(Brain const &other);

		void setIdea(int index, const std::string& idea);
		std::string getIdea(int index) const;

	private:
		std::string _ideas[100];
};

#endif
