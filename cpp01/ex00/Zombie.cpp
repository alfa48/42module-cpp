
#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(const std::string &inputName)
{
    name = inputName;
}

Zombie::~Zombie()
{
    std::cout << name << '\n';
}