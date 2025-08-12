#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <cstdlib> 

class ClapTrap
{
protected:
    std::string name;
    unsigned int hitPts;
    unsigned int energyPts;
    unsigned int attackDamage;

public:
    ClapTrap(std::string name);
    ClapTrap();
    ~ClapTrap();
    ClapTrap(const ClapTrap &src);
    ClapTrap &operator=(const ClapTrap &src);

    void attack(const std::string &target);
    void takeDamage(int amount);
    void beRepaired(int amount);

    void showStatus();
};

#endif