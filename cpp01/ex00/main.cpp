#include "Zombie.hpp"

int main(void)
{
    randomChump("Manuel");
    Zombie *zombie = newZombie("Andre");
    delete zombie;
    return (0);
}