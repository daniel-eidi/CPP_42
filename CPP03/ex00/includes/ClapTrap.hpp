/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:34:09 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/04/19 15:18:49 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
class ClapTrap 
{

	public:

		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);
		ClapTrap & operator =(const ClapTrap &assing);
		~ClapTrap(void);


		std::string getName( void) const;
		int getHitPoints( void ) const;
		int getEnergyPoints( void ) const;
		int getAtackDamage( void ) const;

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:
		std::string  _name ;
		int _hit_points ;
		int _energy_points ;
		int _attack_damage ;
};

#endif

