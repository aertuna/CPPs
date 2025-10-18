/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 16:25:52 by aertuna           #+#    #+#             */
/*   Updated: 2025/05/03 17:00:35 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <sstream>
#include <iostream>
#include <cstdlib>

RPN::RPN() {}

RPN::RPN(const RPN& other) : stack(other.stack) {}

RPN& RPN::operator=(const RPN& other)
{
    if (this != &other)
        stack = other.stack;
    return *this;
}

RPN::~RPN() {}

bool RPN::isOperator(char c) const
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}

void RPN::applyOperator(char op)
{
    if (stack.size() < 2)
        throw std::runtime_error("Error");
    
    int b = stack.back(); stack.pop_back();
    int a = stack.back(); stack.pop_back();

    int result = 0;
    if (op == '+') result = a + b;
    else if (op == '-') result = a - b;
    else if (op == '*') result = a * b;
    else if (op == '/') {
        if (b == 0)
            throw std::runtime_error("Error");
        result = a / b;
    }
    stack.push_back(result);
}

int RPN::calculate(const std::string& expr)
{
    std::istringstream iss(expr);
    std::string token;

    while (iss >> token)
    {
        if (token.length() == 1 && isOperator(token[0]))
            applyOperator(token[0]);
        else if (token.length() == 1 && isdigit(token[0]))
            stack.push_back(token[0] - '0');
        else
            throw std::runtime_error("Error");
    }
    if (stack.size() != 1)
        throw std::runtime_error("Error");
    return stack.back();
}
