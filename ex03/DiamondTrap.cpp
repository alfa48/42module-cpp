
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_diamondTrap_clap_name")
{
	this->name = "default_diamondTrap";
	this->hitPts = FragTrap::hitPts;
	this->energyPts = ScavTrap::energyPts;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	*this = src;
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	this->name = name;
	this->hitPts = FragTrap::hitPts;
	this->energyPts = ScavTrap::energyPts;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap Constructor for " << this->name << " called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Deconstructor for " << this->name << " called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	std::cout << "DiamondTrap Assignation operator called" << std::endl;
	if (this != &src)
	{
		ClapTrap::operator=(src); // copia hitPts, energyPts, attackDamage e ClapTrap::name
        this->name = src.name;
	}
	return *this;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap whoAmI called: My name is "
			  << this->name << ", my ClapTrap name is "
			  << ClapTrap::name << std::endl;
}

void DiamondTrap::showStatus()
{
    std::cout << "DiamondTrap " << this->name << "| Energy points (" << this->energyPts << ")| Hit points (" << this->hitPts << ")| Attack damage (" << this->attackDamage << ")" << std::endl;
}
