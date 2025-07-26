#include "HumanB.hpp"

static Weapon noWeapon("No weapon");

HumanB::HumanB(std::string name) : name(name), weapon(NULL){
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
    std::cout << name << " attacks with their " << (*weapon).getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}