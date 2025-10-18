/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:39:49 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/31 14:05:56 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "=== Constructing Objects ===" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << "\n=== Testing getType() ===" << std::endl;
    std::cout << "Dog Type: " << j->getType() << std::endl;
    std::cout << "Cat Type: " << i->getType() << std::endl;
    
    std::cout << "\n=== Testing makeSound() ===" << std::endl;
    i->makeSound(); // should output "Miyav!"
    j->makeSound(); // should output "Hav Hav!"
    meta->makeSound(); // should output "Unknown sound"

    std::cout << "\n=== Copy Constructor & Assignment Test ===" << std::endl;
    Cat copyCat(*dynamic_cast<const Cat*>(i)); // Copy constructor test
    copyCat.makeSound();

    Dog copyDog;
    copyDog = *dynamic_cast<const Dog*>(j); // Assignment operator test
    copyDog.makeSound();

    std::cout << "\n=== Testing WrongAnimal ===" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    
    std::cout << "WrongCat Type: " << wrongCat->getType() << std::endl;
    wrongMeta->makeSound(); // should output "Wrong animal sound"
    wrongCat->makeSound(); // should output "Wrongmeow!"

    std::cout << "\n=== Cleaning Up ===" << std::endl;
    delete meta;
    delete j;
    delete i;
    delete wrongMeta;
    delete wrongCat;

    return 0;
}
