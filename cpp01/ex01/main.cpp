#include "Zombie.hpp"

int main()
{
    int n = 4;
    Zombie *horde = zombieHorde(n, "Zigg");
    for (int i = 0; i < n; i++)
    {
        horde[0].announce();
    }

    delete[] horde;
    return (0);
}