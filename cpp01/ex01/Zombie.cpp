
#include "Zombie.hpp"

Zombie::Zombie(){}
void Zombie::setName(std::string inputName)
{
    Zombie::name = inputName;
}
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