#include "Zombie.hpp"

//alocada na heap
void randomChump(std::string inputName)
{
    Zombie zombie(inputName);
    zombie.announce();
}