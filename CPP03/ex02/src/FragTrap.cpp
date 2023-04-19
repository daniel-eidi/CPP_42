/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:13:12 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/04/19 16:51:30 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>


FragTrap::FragTrap()
{
	std::cout << "Default FragTrap created" << std::endl;
	_name = "Default";
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
}


FragTrap::FragTrap(std::string name)
{
	std::cout << name << " FragTrap created" << std::endl;
	_name = name;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap()
{
	std::cout << "Copy FragTrap constructor called" << std::endl;

	*this = copy;
}

FragTrap &FragTrap::operator = (const FragTrap &assing)
{
	std::cout << "Copy assignment FragTrap called" << std::endl;
	_name = assing.getName();
	_hit_points = assing.getHitPoints();
	_energy_points = assing.getEnergyPoints();
	_attack_damage = assing.getAtackDamage();
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << _name << " FragTrap destroyed" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if(_energy_points > 0)
	{
		std::cout << "FragTrap " << _name << " attacks " <<  target << \
	", causing " << _attack_damage << " points of damage!" << std::endl;
		_energy_points --;
	}
}


void FragTrap::highFivesGuys()
{
	std::cout << "High five!!" << std::endl;
}

