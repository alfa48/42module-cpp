#ifndef DIMONDTRAP_HPP
#define DIMONDTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string name;
	public:
		DiamondTrap();
		DiamondTrap(const DiamondTrap &src);
		DiamondTrap(std::string name);

		virtual ~DiamondTrap();

		DiamondTrap &operator=(const DiamondTrap &src);

		void attack(const std::string &target);
		void whoAmI(void);

};

#endif