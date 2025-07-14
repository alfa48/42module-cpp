#include "Zombie.hpp"

int main(void)
{
    randomChump("Manuel");
    Zombie *zombie = newZombie("Alfredo");
    delete zombie;
    return (0);
}