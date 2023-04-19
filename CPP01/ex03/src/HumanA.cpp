#include "HumanA.hpp"

// Constructors
HumanA::HumanA(std::string name, Weapon &weapon)
    : _name(name), _weapon(weapon)
{
    // std::cout << "\e[0;33mFields Constructor called of HumanA\e[0m" << std::endl;
}

// Destructor
HumanA::~HumanA()
{
    // std::cout << "\e[0;31mDestructor called of HumanA\e[0m" << std::endl;
}

// Getters / Setters
Weapon& HumanA::getWeapon()
{
    return _weapon;
}

void HumanA::setWeapon(Weapon &weapon)
{
    _weapon = weapon;
}

std::string HumanA::getName() const
{
    return _name;
}

void HumanA::setName(std::string name)
{
    _name = name;
}

void HumanA::attack()
{
    std::string w = _weapon.getType();
    std::cout << _name << " attacks with their " << w << std::endl;
}