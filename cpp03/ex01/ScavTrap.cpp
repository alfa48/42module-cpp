#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("default")
{
    this->hitPts = 100;
    this->energyPts = 50;
    this->attackDamage = 20;
    this->guardingGate = false;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->hitPts = 100;
    this->energyPts = 50;
    this->attackDamage = 20;
    this->guardingGate = false;
    std::cout << "ScavTrap " << name << " constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap default destructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
    std::cout << "ScavTrap Copy Constructor called" << std::endl;
    this->guardingGate = src.guardingGate;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    if (this != &src)
    {
        ClapTrap::operator=(src);
        this->guardingGate = src.guardingGate;
    }
    return *this;
}

void ScavTrap::attack(const std::string &target)
{
    if (energyPts > 0 && hitPts > 0)
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPts--;
    }
    else if (this->energyPts == 0)
        std::cout << "ScavTrap " << this->name << " is not able to attack " << target << ", because he has no energy points left" << std::endl;
    else
        std::cout << "ScavTrap " << this->name << " is not able to attack " << target << ", because he has not enough hit points" << std::endl;
    this->showStatus();
}

void ScavTrap::guardGate()
{
    this->guardingGate = true;
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::showStatus()
{
    std::cout << "ScavTrap " << this->name << "| Energy points (" << this->energyPts << ")| Hit points (" << this->hitPts << ")| Attack damage (" << this->attackDamage << ")" << std::endl;
}