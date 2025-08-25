#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure &other) : AMateria("cure") {}

Cure &Cure::operator=(const Cure &other)
{
    // Não copia o tipo!
    return *this;
}

Cure::~Cure() {}

AMateria *Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}