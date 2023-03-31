/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:13:12 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/03/29 18:00:33 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>


Fixed::Fixed()
{
	_raw = 0;
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int n)
{
	_raw = n << n_bits;
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float f)
{
	_raw = roundf(f * (1 << n_bits));
	//std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	//std::cout << "Copy constructor called" << std::endl;
	//_raw = copy.getRawBits();
	*this = copy;
}
Fixed &Fixed::operator = (const Fixed &assing)
{
	//Fixed(assing);
	//std::cout << "Copy assignment operator called" << std::endl;
	_raw = assing.getRawBits();
	return *this;
}

Fixed Fixed::operator + (const Fixed &assing)
{
	Fixed	temp;
	temp.setRawBits(_raw + assing.getRawBits());
	return temp;
}

Fixed Fixed::operator - (const Fixed &assing)
{
	Fixed	temp;
	temp.setRawBits(_raw - assing.getRawBits());
	return temp;
}

Fixed Fixed::operator * (const Fixed &assing)
{
	Fixed	temp;
	temp.setRawBits(((_raw  * assing.getRawBits()) >> n_bits));
	return temp;
}
Fixed Fixed::operator / (const Fixed &assing)
{
	Fixed	temp;
	temp.setRawBits(((_raw << n_bits) / assing.getRawBits()));
	return temp;
}
// Prefix ++
Fixed &Fixed::operator ++ (void)
{

	++this->_raw;
	return *this;
}

Fixed Fixed::operator ++ (int)
{
	Fixed temp(*this);
	++this->_raw;
	return temp;
}
// Prefix ++
Fixed &Fixed::operator -- (void)
{

	--this->_raw;
	return *this;
}

Fixed Fixed::operator -- (int)
{
	Fixed temp(*this);
	--this->_raw;
	return temp;
}

// comparative operators
bool Fixed::operator < (const Fixed &f) const
{
	return (_raw < f.getRawBits());
}

bool Fixed::operator > (const Fixed &f) const
{
	return (_raw > f.getRawBits());
}

bool Fixed::operator <= (const Fixed &f) const
{
	return (_raw <= f.getRawBits());
}

bool Fixed::operator >= (const Fixed &f) const
{
	return (_raw >= f.getRawBits());
}

bool Fixed::operator == (const Fixed &f) const
{
	return (_raw == f.getRawBits());
}

bool Fixed::operator != (const Fixed &f) const
{
	return (_raw != f.getRawBits());
}


const Fixed &Fixed::max (const Fixed &f1, const Fixed &f2)
{
	if (f1 >= f2)
		return (f1);
	return (f2);
}

const Fixed &Fixed::min (const Fixed &f1, const Fixed &f2)
{
	if (f1 <= f2)
		return (f1);
	return (f2);
}




Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
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

