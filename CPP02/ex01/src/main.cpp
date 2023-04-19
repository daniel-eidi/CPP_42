/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:41:19 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/04/17 17:51:32 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}

// int main( void ) 
// {
// 	Fixed a;
// 	Fixed const b( 1 );
// 	Fixed const c( 42.42f );
// 	Fixed const d( b );
// 	a = Fixed( 1234567.4321f );
// 	std::cout << "a is " << a << std::endl;
// 	std::cout << "raw is " << a.getRawBits() << std::endl;
// 	std::cout << "b is " << b << std::endl;
// 	std::cout << "raw is " << b.getRawBits() << std::endl;
// 	std::cout << "c is " << c << std::endl;
// 	std::cout << "raw is " << c.getRawBits() << std::endl;
// 	std::cout << "d is " << d << std::endl;
// 	std::cout << "raw is " << d.getRawBits() << std::endl;
// 	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
// 	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
// 	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
// 	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
// 	return 0;
// }