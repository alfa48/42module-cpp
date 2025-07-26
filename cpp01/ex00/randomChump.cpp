#include "Zombie.hpp"

//alocada na stack
void randomChump(std::string inputName)
{
    Zombie zombie(inputName);
    zombie.announce();
}