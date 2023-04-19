/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:13:12 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/04/17 12:30:26 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include <Harl.hpp>

Harl::Harl(){}
Harl::~Harl(){}

void Harl::debug() 
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "Debugging...\n" << std::endl;
}
void Harl::info() 
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "Information...\n" << std::endl;
}
void Harl::warning() 
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "Warning!\n" << std::endl;
}
void Harl::error() 
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "Error!\n" << std::endl;
}


void Harl::complain(std::string level)
	{
	void (Harl::*ptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error };  // declare pointer to member function
	int i = 0;
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
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
