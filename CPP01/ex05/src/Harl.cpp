/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:13:12 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/04/17 12:29:54 by daeidi-h         ###   ########.fr       */
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
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*ptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error };  // declare pointer to member function
	for(int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			(this->*(ptr[i]))();
	}
};
