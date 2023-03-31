/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:34:09 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/03/29 11:06:46 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_HPP
# define Fixed_HPP
#include <iostream>
#include <string>

class Fixed 
{

	public:

		Fixed();
		Fixed(const Fixed &copy);
		Fixed & operator =(const Fixed &assing);

		~Fixed();

		int getRawBits( void ) const;
		void setRawBits( int const raw );

	private:
		int _raw ;
		static const int n_bits = 8;
};

#endif

