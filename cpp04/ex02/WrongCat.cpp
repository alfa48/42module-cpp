#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() {
    type = "WrongCat";
    std::cout << "WrongCat constructed" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    std::cout << "WrongCat copy constructed" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    std::cout << "WrongCat assigned" << std::endl;
    WrongAnimal::operator=(other);
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructed" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "Meow Meow" << std::endl;
}