#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string type;

public:
    const std::string &getType(void) const;
    void setType(std::string type);
    Weapon();
    Weapon(std::string);
    ~Weapon();
};

#endif