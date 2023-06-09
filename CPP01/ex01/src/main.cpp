/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:41:19 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/04/17 11:20:24 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

int main(void)
{
	Zombie *zombies = zombieHorde( 8, "zezinho");
	int i = -1;

	while (++i < 8)
		zombies[i].announce();
	delete [] zombies;

}