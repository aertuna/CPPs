/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 17:56:23 by aertuna           #+#    #+#             */
/*   Updated: 2025/05/03 13:25:01 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <sstream>
#include <iostream>
#include <cstdlib>

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) : data(other.data) {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this != &other)
        data = other.data;
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::loadData(const std::string &dbFile)
{
    std::ifstream file(dbFile.c_str());
    if (!file.is_open())
    {
        std::cerr << "Error: could not open database file." << std::endl;
        std::exit(1);
    }
    std::string line;
    std::getline(file, line);
    while (std::getline(file, line))
    {
        std::istringstream iss(line);
        std::string date, rateStr;
        if (std::getline(iss, date, ',') && std::getline(iss, rateStr))
        {
            float rate = std::atof(rateStr.c_str());
            data[date] = rate;
        }
    }
}

void BitcoinExchange::processFile(const std::string &inputFile) const
{
    std::ifstream file(inputFile.c_str());
    if (!file.is_open())
    {
        std::cerr << "Error: could not open file." << std::endl;
        return;
    }
    std::string line;
    std::getline(file, line);
    while (std::getline(file, line))
    {
        std::string date, valueStr;
        std::istringstream iss(line);
        if (!std::getline(iss, date, '|') || !std::getline(iss, valueStr))
        {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
        while (!date.empty() && date[date.size() - 1] == ' ') date.erase(date.size() - 1);
        while (!date.empty() && date[0] == ' ') date.erase(0, 1);
        while (!valueStr.empty() && valueStr[0] == ' ') valueStr.erase(0, 1);
        while (!valueStr.empty() && valueStr[valueStr.size() - 1] == ' ') valueStr.erase(valueStr.size() - 1);

        float value;
        if (!isValidDate(date))
        {
            std::cerr << "Error: bad input => " << date << std::endl;
            continue;
        }
        if (!isValidValue(valueStr, value))
        {
            if (value < 0)
                std::cerr << "Error: not a positive number." << std::endl;
            else
                std::cerr << "Error: too large a number." << std::endl;
            continue;
        }
        std::map<std::string, float>::const_iterator it = data.lower_bound(date);
        if (it == data.end() || it->first != date)
        {
            if (it == data.begin())
            {
                std::cerr << "Error: no rate available for date " << date << std::endl;
                continue;
            }
            --it;
        }
        float rate = it->second;
        float result = value * rate;
        std::cout << date << " => " << valueStr << " = " << result << std::endl;
    }
}

bool BitcoinExchange::isValidDate(const std::string &date) const
{
    int y, m, d;
    char c1, c2;
    std::istringstream iss(date);
    if (!(iss >> y >> c1 >> m >> c2 >> d) || c1 != '-' || c2 != '-')
        return false;
    if (m < 1 || m > 12 || d < 1 || d > daysInMonth(y, m))
        return false;
    return true;
}

bool BitcoinExchange::isValidValue(const std::string &str, float &value) const
{
    char *end;
    value = std::strtof(str.c_str(), &end);
    if (end == str.c_str() || *end != '\0')
        return false;
    if (value < 0)
        return false;
    if (value > 1000)
        return false;
    return true;
}

bool BitcoinExchange::isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int BitcoinExchange::daysInMonth(int year, int month)
{
    static const int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (month == 2 && isLeapYear(year))
        return 29;
    return days[month];
}
