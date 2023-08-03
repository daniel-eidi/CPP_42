/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:29:08 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/08/03 13:34:02 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Serializer.hpp"

std::ostream &operator<<(std::ostream &os, Data &data)
{
	os << "Name: " << data.name << "\n" << "Age: " << data.age << "\n" << std::endl;
	return os;
}

int main( void )
{
	Data someData = {"Daneil",  18};
	Data *pointer;
	Data *pointer2;
	uintptr_t ptr;
	
	std::cout << someData;
	pointer = &someData;
	ptr = Serializer::serialize(pointer);
	std::cout << "Poinrter serialized = " << ptr << std::endl <<std::endl;

	pointer2 = Serializer::deserialize(ptr);
	std::cout << *pointer2 << std::endl;

	return (0);
}