/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:30:04 by aertuna           #+#    #+#             */
/*   Updated: 2025/03/11 15:01:24 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main()
{
    Data myData;
    myData.value = 42;
    myData.name = "Alperen";

    uintptr_t raw = Serializer::serialize(&myData);
    
    Data* deserializedPtr = Serializer::deserialize(raw);

    std::cout << "Original Pointer : " << &myData << std::endl;
    std::cout << "Deserialized Pointer : " << deserializedPtr << std::endl;

    std::cout << "Original Data -> value: " << myData.value << ", name: " << myData.name << std::endl;
    std::cout << "Deserialized Data -> value: " << deserializedPtr->value << ", name: " << deserializedPtr->name << std::endl;

    return 0;
}
