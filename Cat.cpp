#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
    type = "Cat";
    std::cout << "Cat constructed" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "Cat copy constructed" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat assigned" << std::endl;
    Animal::operator=(other);
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destructed" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow Meow" << std::endl;
}