/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:23:17 by aertuna           #+#    #+#             */
/*   Updated: 2025/03/11 21:59:48 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter& other) { (void)other; }
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) { (void)other; return *this; }
ScalarConverter::~ScalarConverter() {}

bool isChar(const std::string& str)
{
    return (str.length() == 1 && isprint(str[0]) && !isdigit(str[0]));
}

bool isInt(const std::string& str)
{
    char* end;
    long value = std::strtol(str.c_str(), &end, 10);
    return (*end == '\0' && value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max());
}

bool isFloat(const std::string& str)
{
    char* end;
    std::strtof(str.c_str(), &end);
    return (*end == 'f' && *(end + 1) == '\0');
}

bool isDouble(const std::string& str)
{
    char* end;
    std::strtod(str.c_str(), &end);
    return (*end == '\0');
}

void ScalarConverter::convert(const std::string& input)
{
    if (isChar(input))
    {
        char c = input[0];
        std::cout << "char: '" << c << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
        return;
    }

    char* end;
    double value = std::strtod(input.c_str(), &end);
    bool isNan = (input == "nan" || input == "+nan" || input == "-nan");
    bool isInf = (input == "inf" || input == "+inf" || input == "-inf");

    if (*end != '\0' && isNan && isInf)
    {
        std::cout << "Error: Invalid input!" << std::endl;
        return;
    }

    if (isNan || isInf || value < 0 || value > 255)
    {
        std::cout << "char: impossible" << std::endl;
    }
    else if (!isprint(static_cast<char>(value)))
    {
        std::cout << "char: Non displayable" << std::endl;
    }
    else
    {
        std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
    }

    if (isNan || isInf || value > INT_MAX || value < INT_MIN)
    {
        std::cout << "int: impossible" << std::endl;
    }
    else
    {
        std::cout << "int: " << static_cast<int>(value) << std::endl;
    }

    std::cout << "float: " << static_cast<float>(value);
    if (!isNan && !isInf && input.find('.') == std::string::npos)
    {
        std::cout << ".0";
    }
    std::cout << "f" << std::endl;

    std::cout << "double: " << value;
    if (!isNan && !isInf && input.find('.') == std::string::npos)
    {
        std::cout << ".0";
    }
    std::cout << std::endl;
}
