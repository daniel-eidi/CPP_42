/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:41:19 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/04/19 12:29:41 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include <DiamondTrap.hpp>

int main() 
{
	ClapTrap orc("Orc");

	orc.attack("Troll");
	orc.takeDamage(3);
	orc.beRepaired(1);

	ScavTrap troll("Troll");

	troll.attack("Orc");
	troll.takeDamage(5);
	troll.beRepaired(4);
	troll.guardGate();

	FragTrap frag("Frag");

	frag.attack("Orc");
	frag.takeDamage(5);
	frag.beRepaired(4);
	frag.highFivesGuys();

	DiamondTrap diamond("teste");
	diamond.attack("someone");
	diamond.takeDamage(5);
	diamond.beRepaired(4);
	diamond.whoAmI();

	
	return (0);
}
