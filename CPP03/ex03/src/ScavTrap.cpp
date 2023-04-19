/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 10:34:33 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/04/19 17:25:12 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <ScavTrap.hpp>

ScavTrap::ScavTrap()
{
	std::cout << "Default ScavTarp created" << std::endl;
	ScavTrap::_name = "Default";
	ScavTrap::_hit_points = 100;
	ScavTrap::_energy_points = 50;
	ScavTrap::_attack_damage = 20;
}
ScavTrap::ScavTrap(std::string name)
{
	std::cout << name <<" ScavTarp created" << std::endl;
	ScavTrap::_name = name;
	ScavTrap::_hit_points = 100;
	ScavTrap::_energy_points = 50;
	ScavTrap::_attack_damage = 20;
	
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap()
{
	std::cout << "Copy ScavTrap constructor called" << std::endl;

	*this = copy;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &assing)
{
	std::cout << "Copy assignment ScavTrap called" << std::endl;
	_name = assing.getName();
	_hit_points = assing.getHitPoints();
	_energy_points = assing.getEnergyPoints();
	_attack_damage = assing.getAtackDamage();
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << _name <<" ScavTarp destroyed" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate" << std::endl;
}

void ScavTrap::attack (const std::string& target)
{
	if(_energy_points > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " <<  target << \
	", causing " << _attack_damage << " points of damage!" << std::endl;
		_energy_points --;
	}
}