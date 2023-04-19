/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:13:28 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/04/17 11:13:54 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Zombie.hpp>

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* zombiehorde = new Zombie[N];
	int i = -1;
	while (++i < N)
		zombiehorde[i].setName(name);
	return(zombiehorde);
}
