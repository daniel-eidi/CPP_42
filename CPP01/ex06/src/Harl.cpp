/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:13:12 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/03/28 19:06:03 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include <Harl.hpp>

Harl::Harl(){}
Harl::~Harl(){}

void Harl::debug() 
{
	std::cout << "Debugging...\n";
}
void Harl::info() 
{
	std::cout << "Information...\n";
}
void Harl::warning() 
{
	std::cout << "Warning!\n";
}
void Harl::error() 
{
	std::cout << "Error!\n";
}


void Harl::complain(std::string level)
	{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*ptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error };  // declare pointer to member function
	int i = 0;
	while ( i < 4 && levels[i] != level)
		 i++;
	switch(i) {
		case 0:
			(this->*(ptr[0]))();
			(this->*(ptr[1]))();
			(this->*(ptr[2]))();
			(this->*(ptr[3]))();
			break;
		case 1:
			(this->*(ptr[1]))();
			(this->*(ptr[2]))();
			(this->*(ptr[3]))();
			break;
		case 2:
			(this->*(ptr[2]))();
			(this->*(ptr[3]))();
			break;
		case 3:
			(this->*(ptr[3]))();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
};
