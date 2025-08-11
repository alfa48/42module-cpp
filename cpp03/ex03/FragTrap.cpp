#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("default")
{
    this->hitPts = 100;
    this->energyPts = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->hitPts = 100;
    this->energyPts = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap " << name << " constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap default destructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
    std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
    std::cout << "FragTrap assignation operator called" << std::endl;
    if (this != &src)
    {
        ClapTrap::operator=(src);
    }
    return *this;
}

void FragTrap::attack(const std::string &target)
{
    if (energyPts > 0 && hitPts > 0)
    {
        std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPts--;
    }
    else if (this->energyPts == 0)
        std::cout << "FragTrap " << this->name << " is not able to attack " << target << ", because he has no energy points left" << std::endl;
    else
        std::cout << "FragTrap " << this->name << " is not able to attack " << target << ", because he has not enough hit points" << std::endl;
    this->showStatus();
}

void FragTrap::highFivesGuys(void)
{
     std::cout << "FragTrap " << this->name << " wants to high five!" << std::endl;
}

void FragTrap::showStatus()
{
    std::cout << "FragTrap " << this->name << "| Energy points (" << this->energyPts << ")| Hit points (" << this->hitPts << ")| Attack damage (" << this->attackDamage << ")" << std::endl;
}