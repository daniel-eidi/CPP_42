/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeidi-h <daeidi-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:41:19 by daeidi-h          #+#    #+#             */
/*   Updated: 2023/03/31 08:19:22 by daeidi-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>

int main(void)
{
	PhoneBook book;
	std::string s = "";
	while(s != "EXIT")
	{	
		std::cout << "TYPE A COMMAND (ADD, SEARCH OR EXIT): ";
		std::getline(std::cin, s);
		if(s == "ADD")
			book.add();
		else if (s == "SEARCH")
			book.search();
	}
}