/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:13:12 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/04/17 17:59:59 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

Fixed::Fixed()
{
	_raw = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int n)
{
	_raw = n << n_bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float f)
{
	_raw = roundf(f * (1 << n_bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	//_raw = copy.getRawBits();
	*this = copy;
}
Fixed &Fixed::operator = (const Fixed &assing)
{
	//Fixed(assing);
	std::cout << "Copy assignment operator called" << std::endl;
	_raw = assing.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return(_raw);
}

int Fixed::toInt( void ) const
{
	int n;
	n = _raw >> n_bits;
	return(n);
}

float Fixed::toFloat( void ) const
{
	float f;
	f = float(float(_raw) / (float)(1 << n_bits));
	return(f);
}


void Fixed::setRawBits( int const raw )
{
	_raw = raw;
}

std::ostream &operator << (std::ostream &os, const Fixed &f)
{
	os << f.toFloat();
	return (os);
}

