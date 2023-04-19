/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 10:34:33 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/03/31 11:55:09 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <ScavTrap.hpp>

ScavTrap::ScavTrap()
{
	std::cout << "Default ScavTarp created" << std::endl;
}
ScavTrap::ScavTrap(std::string name)
{
	std::cout << name <<" ScavTarp created" << std::endl;
	ScavTrap::_name = name;
	ScavTrap::_hit_points = 100;
	ScavTrap::_energy_points = 50;
	ScavTrap::_attack_damage = 20;
	
}

ScavTrap::~ScavTrap()
{
	std::cout << _name <<" ScavTarp destroyed" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate" << std::endl;
}
