/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 14:57:38 by aertuna           #+#    #+#             */
/*   Updated: 2025/04/29 13:40:18 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void testVector()
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    
    std::cout << vec[0]<< std::endl;
    std::cout << vec[1]<< std::endl;
    std::cout << vec[2]<< std::endl;
    std::cout << vec[3]<< std::endl;
    std::cout << vec[4]<< std::endl;
    
    try
    {
        std::vector<int>::iterator it = easyfind(vec, 2);
        std::cout << "Vector: Found " << *it << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Vector: " << e.what() << std::endl;
    }
}

void testList()
{
    std::list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);
    lst.push_back(50);

    std::list<int>::iterator it = lst.begin();
    int count = 0;

    while (it != lst.end() && count < 5) {
        std::cout << *it << std::endl;
        ++it;
        ++count;
    }

    try
    {
        std::list<int>::iterator it = easyfind(lst, 20);
        std::cout << "List: Found " << *it << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "List: " << e.what() << std::endl;
    }
}

void testDeque()
{
    std::deque<int> deq;
    deq.push_back(100);
    deq.push_back(200);
    deq.push_back(300);
    deq.push_back(400);

    std::cout << deq[0]<< std::endl;
    std::cout << deq[1]<< std::endl;
    std::cout << deq[2]<< std::endl;
    std::cout << deq[3]<< std::endl;

    try
    {
        std::deque<int>::iterator it = easyfind(deq, 300);
        std::cout << "Deque: Found " << *it << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Deque: " << e.what() << std::endl;
    }
}

void testEmptyContainer()
{
    std::vector<int> emptyVec;
    try
    {
        std::vector<int>::iterator it = easyfind(emptyVec, 1);
        std::cout << "Empty Vector: Found " << *it << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Empty Vector: " << e.what() << std::endl;
    }
}

int main()
{
    testVector();
    testList();
    testDeque();
    testEmptyContainer();
    return 0;
}
