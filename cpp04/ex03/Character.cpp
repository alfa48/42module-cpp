#include "Character.hpp"

Character::Character(const std::string &name) : _name(name)
{
    for (int i = 0; i < 4; ++i)
        _inventory[i] = nullptr;
}

Character::Character(const Character &other) : _name(other._name)
{
    for (int i = 0; i < 4; ++i)
    {
        if (other._inventory[i])
            _inventory[i] = other._inventory[i]->clone();
        else
            _inventory[i] = nullptr;
    }
}

Character &Character::operator=(const Character &other)
{
    if (this != &other)
    {
        _name = other._name;
        for (int i = 0; i < 4; ++i)
        {
            if (_inventory[i])
                delete _inventory[i];
            if (other._inventory[i])
                _inventory[i] = other._inventory[i]->clone();
            else
                _inventory[i] = nullptr;
        }
    }
    return *this;
}

Character::~Character()
{
    for (int i = 0; i < 4; ++i)
        delete _inventory[i];
}

std::string const &Character::getName() const
{
    return _name;
}

void Character::equip(AMateria *m)
{
    if (!m)
        return;
    for (int i = 0; i < 4; ++i)
    {
        if (!_inventory[i])
        {
            _inventory[i] = m;
            return;
        }
    }
    // Inventory full, do nothing
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4)
        return;
    _inventory[idx] = nullptr;
    // Do NOT delete the Materia!
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx >= 4 || !_inventory[idx])
        return;
    _inventory[idx]->use(target);
}