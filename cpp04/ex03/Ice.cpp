#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice &other) : AMateria("ice") {}

Ice &Ice::operator=(const Ice &other)
{
    // Não copia o tipo!
    return *this;
}

Ice::~Ice() {}

AMateria *Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}