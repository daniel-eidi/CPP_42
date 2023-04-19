/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:34:09 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/04/19 16:01:11 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <ClapTrap.hpp>

class ScavTrap : public ClapTrap
{

	public:

		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);
		ScavTrap & operator =(const ScavTrap &assing);
		~ScavTrap(void);

		void attack(const std::string& target);
		void guardGate();
	private:
};

#endif

