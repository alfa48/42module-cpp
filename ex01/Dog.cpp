#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal(), brain(new Brain()) {
    type = "Dog";
    std::cout << "Dog constructed" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other), brain(new Brain(*other.brain)) {
    std::cout << "Dog copy constructed" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << "Dog assigned" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
        *brain = *other.brain; // deep copy
    }
    return *this;
}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog destructed" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof Woof" << std::endl;
}