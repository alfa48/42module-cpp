#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
    std::cout << "Brain constructed" << std::endl;
}

Brain::Brain(const Brain& other) {
    std::cout << "Brain copy constructed" << std::endl;
    for (int i = 0; i < 100; ++i)
        ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain& other) {
    std::cout << "Brain assigned" << std::endl;
    if (this != &other) {
        for (int i = 0; i < 100; ++i)
            ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructed" << std::endl;
}