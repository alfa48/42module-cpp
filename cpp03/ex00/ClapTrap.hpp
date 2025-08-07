#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
    std::string name;
    unsigned int hitPts;
    unsigned int energyPts;
    unsigned int atackDamage;

public:
    ClapTrap(std::string name);
    ClapTrap();
    ~ClapTrap();
    ClapTrap(const ClapTrap &src);
    ClapTrap &operator=(const ClapTrap &src);

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void showStatus();
};

#endif