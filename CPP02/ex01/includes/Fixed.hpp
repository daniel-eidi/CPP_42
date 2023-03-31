/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:34:09 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/03/29 15:22:44 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_HPP
# define Fixed_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed 
{

	public:

		Fixed();
		Fixed(int n);
		Fixed(float f);
		Fixed(const Fixed &copy);
		Fixed & operator =(const Fixed &assing);

		~Fixed();

		int getRawBits( void ) const;
		void setRawBits( int const raw );

		float toFloat( void ) const;
		int toInt (void) const;

	private:
		int _raw ;
		static const int n_bits = 8;
};

std::ostream &operator << (std::ostream &os, const Fixed &f);

#endif

