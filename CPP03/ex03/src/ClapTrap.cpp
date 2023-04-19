/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:13:12 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/04/19 11:24:54 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>


ClapTrap::ClapTrap()
{
	std::cout << "Default ClapTrap created" << std::endl;
}


ClapTrap::ClapTrap(std::string name)
{
	std::cout << name << " ClapTrap created" << std::endl;
	_name = name;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 10;
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << " ClapTrap destroyed" << std::endl;
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

std::string ClapTrap::getName(void) const
{
	return(_name);
}