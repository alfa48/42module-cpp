#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    ScavTrap &operator=(const ScavTrap &src);
    ScavTrap(const ScavTrap &src);
    void attack(const std::string &target);
    void guardGate();
    void showStatus();
};

#endif