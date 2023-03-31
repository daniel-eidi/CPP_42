#include "HumanB.hpp"

// Constructors
HumanB::HumanB(std::string name)
    : _name(name)
{
    std::cout << "\e[0;33mFields Constructor called of HumanB\e[0m" << std::endl;
}

// Destructor
HumanB::~HumanB()
{
    std::cout << "\e[0;31mDestructor called of HumanB\e[0m" << std::endl;
}

// Getters / Setters
Weapon& HumanB::getWeapon()
{
    return *_weapon;
}

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}

std::string HumanB::getName() const
{
    return _name;
}

void HumanB::setName(std::string name)
{
    _name = name;
}

void HumanB::attack()
{
    std::string w = (*_weapon).getType();
    std::cout << _name << " attacks with their " << w << std::endl;
}