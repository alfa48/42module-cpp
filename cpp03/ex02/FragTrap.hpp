#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap &operator=(const FragTrap &src);
    FragTrap(const FragTrap &src);
    void attack(const std::string &target);
    void highFivesGuys(void);
    void showStatus();
};

#endif