#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hitPts(10), energyPts(10), attackDamage(0)
{
    std::cout << "ClapTrap " << name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap() : name("clapTrapDefault"), hitPts(10), energyPts(10), attackDamage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap default destructor" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    if (this != &src)
    {
        this->name = src.name;
        this->hitPts = src.hitPts;
        this->attackDamage = src.attackDamage;
        this->energyPts = src.energyPts;
    }
    return *this;
}

void ClapTrap::showStatus()
{
    std::cout << "ClapTrap " << this->name << "| Energy points (" << this->energyPts << ")| Hit points (" << this->hitPts << ")| Attack damage (" << this->attackDamage << ")" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (energyPts > 0 && hitPts > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPts--;
    }
    else if (this->energyPts == 0)
        std::cout << "ClapTrap " << this->name << " is not able to attack " << target << ", because he has no energy points left" << std::endl;
    else
        std::cout << "ClapTrap " << this->name << " is not able to attack " << target << ", because he has not enough hit points" << std::endl;
    this->showStatus();
}

void ClapTrap::takeDamage(int val)
{
    unsigned int amount = std::abs(val); 
    unsigned int pointsLost;
    if (this->hitPts == 0)
    {
        std::cout << "ClapTrap " << this->name << " is already dead, stop beating it" << std::endl;
        return;
    }
    if (this->hitPts > amount)
    {
        this->hitPts -= amount;
        pointsLost = amount;
    }
    else if (this->hitPts <= amount)
    {
        pointsLost = this->hitPts;
        this->hitPts = 0;
    }
    std::cout << "ClapTrap " << this->name << " was attacked and lost " << pointsLost << " hit points, he now has " << this->hitPts << " hit points" << std::endl;
}

void ClapTrap::beRepaired(int val)
{
     unsigned int amount = std::abs(val); 
    if (this->energyPts == 0)
    {
        std::cout << "ClapTrap " << this->name << " can not do anything if it has no energy points left" << std::endl;
        return;
    }
    else if (hitPts == 0)
    {
        std::cout << "ClapTrap " << this->name << " can not do anything if it has no hit points left" << std::endl;
        return;
    }
    else
    {
        this->hitPts += amount;
        std::cout << "ClapTrap " << this->name << " repaired itself and gained " << amount << " of hit points, he now has " << this->hitPts << " hit points." << std::endl;
        this->energyPts--;
    }
}