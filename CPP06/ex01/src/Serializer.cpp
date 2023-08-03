/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:33:24 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/08/03 12:51:03 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Serializer.hpp"

Serializer::Serializer ( void )
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Serializer::~Serializer ( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Serializer::Serializer ( Serializer const &other )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return ;
}

Serializer & Serializer::operator=( Serializer const &other )
{
	(void)other;
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t raw;
	
	raw = reinterpret_cast<uintptr_t>(ptr);
	return (raw);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	Data *ptr;
	
	ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}
