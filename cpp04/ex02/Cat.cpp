#include "Cat.hpp"
#include <iostream>

Cat::Cat() : AAnimal(), brain(new Brain()) {
    type = "Cat";
    std::cout << "Cat constructed" << std::endl;
}

Cat::Cat(const Cat& other) : AAnimal(other), brain(new Brain(*other.brain)) {
    std::cout << "Cat copy constructed" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat assigned" << std::endl;
    if (this != &other) {
        AAnimal::operator=(other);
        *brain = *other.brain;
    }
    return *this;
}

Cat::~Cat() {
    delete brain;
    std::cout << "Cat destructed" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow Meow" << std::endl;
}