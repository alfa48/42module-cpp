#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): name("scavTrap_junior"), hitPts(100), energyPts(50), atackDamage(20){
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), name(name) hitPts(100), energyPts(50), atackDamage(20)
{
    std::cout << "ScavTrap " << name << " constructor called" << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap default destructor" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (energyPts > 0 && hitPts > 0)
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->atackDamage << " points of damage!" << std::endl;
        this->energyPts--;
    }
    else if (this->energyPts == 0)
        std::cout << "ScavTrap " << this->name << " is not able to attack " << target << ", because he has no energy points left" << std::endl;
    else
        std::cout << "ScavTrap " << this->name << " is not able to attack " << target << ", because he has not enough hit points" << std::endl;
    this->showStatus();
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}