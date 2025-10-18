/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 14:55:07 by aertuna           #+#    #+#             */
/*   Updated: 2025/03/18 16:25:53 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

class Span
{
    private:
        unsigned int _N;
        std::vector<int> _numbers;

    public:
        Span(unsigned int N);
        ~Span();
        Span(const Span& other);
        Span& operator=(const Span& other);
    
        void addNumber(int number);
    
        template <typename InputIterator>
        void addNumbers(InputIterator begin, InputIterator end)
        {
            if (std::distance(begin, end) > static_cast<int>(_N - _numbers.size()))
                throw std::overflow_error("Not enough space to add all numbers!");
            _numbers.insert(_numbers.end(), begin, end);
        }

        template <typename Iterator>
        void addRange(Iterator begin, Iterator end)
        {
            if (std::distance(begin, end) + _numbers.size() > _N)
                throw std::overflow_error("Span capacity exceeded!");
            _numbers.insert(_numbers.end(), begin, end);
        }
    int shortestSpan();
    int longestSpan();
};

#endif
