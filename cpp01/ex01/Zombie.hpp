#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string name;
    int p;

public:
    void setName(std::string name);
    void announce(void);
    Zombie();
    Zombie(const std::string &name);
    ~Zombie();
};

Zombie *zombieHorde(int N, std::string name);

#endif