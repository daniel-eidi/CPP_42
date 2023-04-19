/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:34:09 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/04/18 16:08:43 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <ClapTrap.hpp>

class FragTrap : public ClapTrap
{

	public:

		FragTrap();
		FragTrap(std::string name);
		~FragTrap();

		void highFivesGuys(void);
	private:
};

#endif

