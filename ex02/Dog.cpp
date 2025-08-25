#include "Dog.hpp"
#include <iostream>

Dog::Dog() : AAnimal(), brain(new Brain()) {
    type = "Dog";
    std::cout << "Dog constructed" << std::endl;
}

Dog::Dog(const Dog& other) : AAnimal(other), brain(new Brain(*other.brain)) {
    std::cout << "Dog copy constructed" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << "Dog assigned" << std::endl;
    if (this != &other) {
        AAnimal::operator=(other);
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