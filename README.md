# C++ Exercises Repository (CPPs)

This repository contains a series of C++ exercise projects organized into modules (`cpp00` through `cpp09`).  
Each module focuses on a specific set of C++ concepts, progressively building upon the previous ones.  
These exercises are inspired by 42 School’s C++ modules and are designed to strengthen understanding of object-oriented programming, memory management, templates, and advanced C++ features.

---

## 🗂️ Repository Structure

CPPs/
├── cpp00/ → Basics of C++ and I/O
├── cpp01/ → Memory allocation and references
├── cpp02/ → Orthodox Canonical Form and fixed-point numbers
├── cpp03/ → Inheritance and class hierarchies
├── cpp04/ → Abstract classes and polymorphism
├── cpp05/ → Exception handling and bureaucracy simulation
├── cpp06/ → Type conversion and serialization
├── cpp07/ → Templates and iterators
├── cpp08/ → STL containers and algorithms
└── cpp09/ → Advanced containers and algorithmic exercises


Each module (`cppXX`) contains multiple exercises (`ex00`, `ex01`, etc.) implemented in separate folders.  
Each exercise is self-contained with its own source files and `Makefile`.

---

## 🚀 Modules Overview

### 🧩 **CPP00 – Basics**
- Focus: C++ syntax, I/O streams, and basic program structure.
- Example exercises:
  - `megaphone.cpp` – Simple uppercase converter using command-line arguments.
  - `PhoneBook` – Basic class management and input/output handling.

### 🔧 **CPP01 – Memory & References**
- Focus: Pointers, heap vs. stack, classes, and destructors.
- Key exercises:
  - `Zombie` and `ZombieHorde` – Managing objects in memory.
  - `Sed` – Simple text replacement utility.
  - `Harl` – Class with switch-case-like member function dispatching.

### 🧮 **CPP02 – Orthodox Canonical Form**
- Focus: Class copy constructors, assignment operators, destructors.
- Exercises: Implementing a fixed-point number class with arithmetic operations.

### ⚙️ **CPP03 – Inheritance**
- Focus: Base and derived classes.
- Classes include:
  - `ClapTrap`, `ScavTrap`, and `FragTrap` – Demonstrating inheritance and method overriding.

### 🐾 **CPP04 – Polymorphism**
- Focus: Abstract classes, virtual functions, and deep copies.
- Classes:
  - `Animal`, `Dog`, `Cat`, `Brain`, etc.
- Demonstrates correct memory handling and the Rule of Three.

### 🏢 **CPP05 – Exceptions & Bureaucracy**
- Focus: Exception handling, class composition, and nested classes.
- Classes:
  - `Bureaucrat`, `Form`, `AForm`, `ShrubberyCreationForm`, etc.
- Demonstrates the use of exceptions and polymorphic behavior.

### 🔄 **CPP06 – Type Conversion**
- Focus: Static, dynamic, reinterpret, and const casts.
- Exercises:
  - `ScalarConverter`, `Serializer`, and class hierarchy detection.

### 🧠 **CPP07 – Templates**
- Focus: Template functions and classes.
- Exercises:
  - `whatever.hpp`, `iter.hpp`, `Array.hpp` – Custom generic implementations.

### 📚 **CPP08 – STL Containers**
- Focus: Using STL containers like `vector`, `stack`, and algorithms.
- Examples:
  - `easyfind`, `Span`, `MutantStack`.

### 🧮 **CPP09 – Algorithms & Containers**
- Focus: Real-world style problems using STL.
- Exercises:
  - `BitcoinExchange` – Data parsing and currency conversion.
  - `RPN` – Reverse Polish Notation calculator.
  - `PmergeMe` – Merge-insertion sort hybrid.

---

## 🏗️ Build and Run

Each exercise includes its own `Makefile`.  
To compile a specific project, navigate into its folder and run:

make
./program_name

Example:
cd cpp03/ex02
make
./a.out

To clean up compiled files:
make clean

⚙️ Requirements
C++98 standard
clang++ or g++ compiler
Each project should compile with the following flags:
-Wall -Wextra -Werror -std=c++98

🧭 Learning Objectives

Through these exercises, you will:
- Strengthen your understanding of Object-Oriented Programming (OOP).
- Practice proper memory management and RAII principles.
- Master inheritance, polymorphism, and templates.
- Gain experience with C++ Standard Template Library (STL).
- Improve debugging and code organization skills.
