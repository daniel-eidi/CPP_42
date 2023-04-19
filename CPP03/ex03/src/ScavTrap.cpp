/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 10:34:33 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/04/19 09:19:39 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <ScavTrap.hpp>

ScavTrap::ScavTrap()
{
	std::cout << "Default ScavTrap created" << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << name <<" ScavTrap created" << std::endl;
	_name = name;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	
}

ScavTrap::~ScavTrap()
{
	std::cout << _name <<" ScavTrap destroyed" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate" << std::endl;
}
