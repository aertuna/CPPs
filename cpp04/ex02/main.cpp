/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:39:49 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/31 16:54:48 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int main() {
    std::cout << "\n--- Creating Dog and Cat array ---\n";
    AAnimal* array[100];
        for (int i = 0; i < 20; ++i) {
        if (i < 10) {
            array[i] = new Dog();
        } else {
            array[i] = new Cat();
        }
    }
    
    std::cout << "\n--- Deleting Dog and Cat array ---\n";
    for (int i = 0; i < 20; ++i) {
        delete array[i];
    }
    
    std::cout << "\n--- Creating Dog and Cat with const pointers ---\n";
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    
    delete j;
    delete i;

    std::cout << "\n--- Testing Deep Copy ---\n";
    Dog dog1;
    Dog dog2(dog1);
    Dog dog3;
    dog3 = dog1;
    
    Cat cat1;
    Cat cat2(cat1);
    Cat cat3;
    cat3 = cat1;
    
    std::cout << "\n--- Testing makeSound ---\n";
    dog1.makeSound();
    dog2.makeSound();
    dog3.makeSound();
    
    cat1.makeSound();
    cat2.makeSound();
    cat3.makeSound();

    std::cout << "\n--- Displaying Brain Ideas ---\n";
    dog1.getBrain()->setIdea(0, "Bark loudly");
    dog1.getBrain()->setIdea(1, "Chase the ball");

    cat1.getBrain()->setIdea(0, "Climb trees");
    cat1.getBrain()->setIdea(1, "Scratch the furniture");

    std::cout << "Dog1's Brain Ideas:" << std::endl;
    std::cout << "Idea 1: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "Idea 2: " << dog1.getBrain()->getIdea(1) << std::endl;

    std::cout << "\nCat1's Brain Ideas:" << std::endl;
    std::cout << "Idea 1: " << cat1.getBrain()->getIdea(0) << std::endl;
    std::cout << "Idea 2: " << cat1.getBrain()->getIdea(1) << std::endl;
    std::cout << std::endl;

    std::cout << "\n--- Testing AAnimal with Dog and Cat ---\n";
    
    AAnimal* dog = new Dog();
    AAnimal* cat = new Cat();

    std::cout << "Dog type: " << dog->getType() << std::endl;
    dog->makeSound();
    
    std::cout << "Cat type: " << cat->getType() << std::endl;
    cat->makeSound();
    
    delete dog;
    delete cat;
    
    // AAnimal a;

    std::cout << "\n--- Testing Animal ---\n";
    Animal animal;
    animal.makeSound();

    return 0;
}

