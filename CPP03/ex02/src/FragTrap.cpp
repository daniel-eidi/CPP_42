/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 10:34:33 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/04/18 17:53:34 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <FragTrap.hpp>

FragTrap::FragTrap()
{
	std::cout << "Default FragTrap created" << std::endl;
}
FragTrap::FragTrap(std::string name)
{
	std::cout << name <<" FragTrap created" << std::endl;
	_name = name;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	
}

FragTrap::~FragTrap()
{
	std::cout << _name <<" FragTrap destroyed" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "High five!!" << std::endl;
}
