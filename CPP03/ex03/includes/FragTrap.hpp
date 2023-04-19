/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:34:09 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/04/19 17:00:47 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <ClapTrap.hpp>

class FragTrap : public virtual ClapTrap
{

	public:

		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy);
		FragTrap & operator =(const FragTrap &assing);
		~FragTrap(void);

		void attack(const std::string& target);
		void highFivesGuys(void);
	private:
};

#endif

