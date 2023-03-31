/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:34:09 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/03/29 17:47:49 by daeidi-h         ###   ########.fr       */
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

		Fixed operator+ (const Fixed &assing);
		Fixed operator- (const Fixed &assing);
		Fixed &operator++ (void); // prefixed++
		Fixed operator++ (int); // postfixed++
		Fixed &operator-- (void); // prefixed++
		Fixed operator-- (int); // postfixed++
		Fixed operator/ (const Fixed &assing);
		Fixed operator* (const Fixed &assing);

		bool operator < (const Fixed &f) const;
		bool operator <= (const Fixed &f) const;
		bool operator >= (const Fixed &f) const;
		bool operator > (const Fixed &f) const;
		bool operator == (const Fixed &f) const;
		bool operator != (const Fixed &f) const;
		static const Fixed &max (const Fixed &f1, const Fixed &f2);
		static const Fixed &min (const Fixed &f1, const Fixed &f2);

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

