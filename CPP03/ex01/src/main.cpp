/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:41:19 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/03/31 11:39:17 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

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

	return (0);
}
