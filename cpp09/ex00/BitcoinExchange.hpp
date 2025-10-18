/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 17:56:41 by aertuna           #+#    #+#             */
/*   Updated: 2025/05/01 18:19:03 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <string>
#include <map>

class BitcoinExchange
{
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange& operator=(const BitcoinExchange &other);
        ~BitcoinExchange();

        void loadData(const std::string &dbFile = "data.csv");
        void processFile(const std::string &inputFile) const;

    private:
        std::map<std::string, float> data;

        bool isValidDate(const std::string &date) const;
        bool isValidValue(const std::string &str, float &value) const;
        static bool isLeapYear(int year);
        static int daysInMonth(int year, int month);
};

#endif
