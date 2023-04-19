/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 10:34:33 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/04/18 16:29:27 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <DiamondTrap.hpp>

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	std::cout << "Default DiamondTrap created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") , ScavTrap(name), FragTrap(name)
{
	std::cout << name <<" DiamondTrap created" << std::endl;
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_hit_points = FragTrap::_hit_points;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
	
}

void DiamondTrap::getHitPoints()
{
	std::cout << _hit_points <<" DiamondTrap destroyed" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout <<" DiamondTrap destroyed" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << DiamondTrap::_name << " is my DiamondName and " << ClapTrap::getName() << " is my ClapTrap name." << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int value)
{
	ScavTrap::takeDamage(value);
}

void DiamondTrap::beRepaired(unsigned int value)
{
	ScavTrap::beRepaired(value);
}


