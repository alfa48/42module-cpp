#include "Zombie.hpp"

//alocado na heap
Zombie *newZombie(std::string name)
{
    return (new Zombie(name));
}