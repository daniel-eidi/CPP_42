/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:13:12 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/04/19 17:23:05 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>


ClapTrap::ClapTrap()
{
	std::cout << "Default ClapTarp created" << std::endl;
	_name = "Default";
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 10;
}


ClapTrap::ClapTrap(std::string name)
{
	std::cout << name << " ClapTarp created" << std::endl;
	_name = name;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 10;
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << " ClapTarp destroyed" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;

	*this = copy;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &assing)
{
	std::cout << "Copy assignment ClapTrap called" << std::endl;
	_name = assing.getName();
	_hit_points = assing.getHitPoints();
	_energy_points = assing.getEnergyPoints();
	_attack_damage = assing.getAtackDamage();
	return *this;
}

std::string ClapTrap::getName( void) const
{
	return(_name);
}

int ClapTrap::getHitPoints( void ) const
{
	return(_hit_points);
}

int ClapTrap::getEnergyPoints( void ) const
{
	return(_energy_points);
}

int ClapTrap::getAtackDamage( void ) const
{
	return(_attack_damage);
}

void ClapTrap::attack(const std::string& target)
{
	if(_energy_points > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " <<  target << \
	", causing " << _attack_damage << " points of damage!" << std::endl;
		_energy_points --;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " was damage, losing  " <<  amount << \
" Hitpoints!" << std::endl;
	_hit_points -= amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if(_energy_points > 0)
	{
		std::cout << "ClapTrap " << _name << " was repaired, getting  " \
<<  amount << " Hitpoints!" << std::endl;
		_hit_points += amount;
		_energy_points --;
	}
}
